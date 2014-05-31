;#<![CDATA[
;#
;######################################################################################
;#  This file defines the following flash functions
;#  
;#  massEraseTarget - Entirely erases the target.
;#                    The target should be left in an unsecured state.
;#
;#  isUnsecure - indicates if the target is secured in some fashion (read/write protected)
;#               Returns TCL_OK if NOT secured
;#
;#  initFlash - initialises the target for flash programing (if needed)
;#
;#  initTarget - initialises the target for general use
;#
;#  In addition the script may do any once-only initialisation such as setting global symbols
;#  when initially loaded into the TCL environment.
;#

;#####################################################################################
;#  History
;#
;#  V4.10.4.130 - Changed Mass erase sequence (added retry etc.)
;#  V4.10.4     - Changed return code handling
;#              - Changed Mass erase reset to special-software (FDPROT etc wasn't unprotected)
;# 

;######################################################################################
;#
;#
proc loadSymbols {} {
   # LittleEndian format for writing numbers to memory
   setbytesex littleEndian
   
   set ::MDM_AP_Status                   0x01000000
   set ::MDM_AP_Control                  0x01000004
   set ::MDM_AP_Ident                    0x010000FC
   
   set ::MDM_AP_ST_MASS_ERASE_ACK        0x00000001
   
   set ::MDM_AP_ST_MASS_FLASH_RDY        0x00000002
   set ::MDM_AP_ST_SYSTEM_SECURITY       0x00000004
   set ::MDM_AP_ST_SYSTEM_RESET          0x00000008
   set ::MDM_AP_ST_MASS_ERASE_EN         0x00000020
   set ::MDM_AP_ST_BACKDOOR_EN           0x00000040
   set ::MDM_AP_ST_LP_ENABLE             0x00000080
   set ::MDM_AP_ST_VLP_MODE              0x00000100
   set ::MDM_AP_ST_LLS_MODE_EXIT         0x00000200
   set ::MDM_AP_ST_VLLSx_MODE_EXIT       0x00000400
   set ::MDM_AP_ST_CORE_HALTED           0x00010000
   set ::MDM_AP_ST_SLEEP                 0x00020000
   set ::MDM_AP_ST_SLEEP_DEEP            0x00040000
   set ::MDM_AP_ST_SLEEP_MASK            0x00060000

   set ::MDM_AP_C_MASS_ERASE             0x00000001
   set ::MDM_AP_C_DEBUG_DISABLE          0x00000002
   set ::MDM_AP_C_DEBUG_REQUEST          0x00000004
   set ::MDM_AP_C_SYSTEM_RESET           0x00000008
   set ::MDM_AP_C_CORE_HOLD              0x00000010
   set ::MDM_AP_C_VLLDBREQ               0x00000020
   set ::MDM_AP_C_VLLDBACK               0x00000040
   set ::MDM_AP_C_LLS_ST_ACK             0x00000080
                                    
   set ::DHCSR                           0xE000EDF0
                                    
   set ::DHCSR_C_DEBUGEN                 0x00000001
   set ::DHCSR_C_HALT                    0x00000002
   set ::DHCSR_C_STEP                    0x00000004
   set ::DHCSR_C_MASK_INTS               0x00000008
   set ::DHCSR_C_SNAP_STALL              0x00000020
   set ::DHCSR_DBGKEY                    0xA05F0000
   set ::DHCSR_VALUE                     0xA05F0001
   
   set ::DEMCR                           0xE000EDFC
   set ::DEMCR_VALUE                     0x010007F1

   set ::DEMCR_VC_CORERESET              0x00000001
   set ::DEMCR_VC_HARDERROR              0x00000400
   set ::DEMCR_VC_DWTENA                 0x01000000
   
   set ::MC_SRSH                         0x4007E000
   set ::MC_SRSL                         0x4007E001

   set ::NV_BACKKEY0                     0x0400
   set ::NV_BACKKEY1                     0x0401
   set ::NV_BACKKEY2                     0x0402
   set ::NV_BACKKEY3                     0x0403
   set ::NV_BACKKEY4                     0x0404
   set ::NV_BACKKEY5                     0x0405
   set ::NV_BACKKEY6                     0x0406
   set ::NV_BACKKEY7                     0x0407
   set ::NV_FPROT3                       0x0408
   set ::NV_FPROT2                       0x0409
   set ::NV_FPROT1                       0x040A
   set ::NV_FPROT0                       0x040B
   set ::NV_FSEC                         0x040C
   set ::NV_FOPT                         0x040D
   set ::NV_FEPROT                       0x040E
   set ::NV_FDPROT                       0x040F
   
   set ::MCM_PLACR                       0xF000300C

   set ::FMC_PFAPR                       0x4001F000
   set ::FMC_PFB0CR                      0x4001F004
   set ::FMC_PFB1CR                      0x4001F008

   set ::FTFL_FSTAT                      0x40020000 ;# Flash Status Register, offset: 0x0
   set ::FTFL_FCNFG                      0x40020001 ;# Flash Configuration Register, offset: 0x1
   set ::FTFL_FSEC                       0x40020002 ;# Flash Security Register, offset: 0x2
   set ::FTFL_FOPT                       0x40020003 ;# Flash Option Register, offset: 0x3
   set ::FTFL_FCCOB3                     0x40020004 ;# Flash Common Command Object Registers, offset: 0x4
   set ::FTFL_FCCOB2                     0x40020005 ;# Flash Common Command Object Registers, offset: 0x5
   set ::FTFL_FCCOB1                     0x40020006 ;# Flash Common Command Object Registers, offset: 0x6
   set ::FTFL_FCCOB0                     0x40020007 ;# Flash Common Command Object Registers, offset: 0x7
   set ::FTFL_FCCOB7                     0x40020008 ;# Flash Common Command Object Registers, offset: 0x8
   set ::FTFL_FCCOB6                     0x40020009 ;# Flash Common Command Object Registers, offset: 0x9
   set ::FTFL_FCCOB5                     0x4002000A ;# Flash Common Command Object Registers, offset: 0xA
   set ::FTFL_FCCOB4                     0x4002000B ;# Flash Common Command Object Registers, offset: 0xB
   set ::FTFL_FCCOBB                     0x4002000C ;# Flash Common Command Object Registers, offset: 0xC
   set ::FTFL_FCCOBA                     0x4002000D ;# Flash Common Command Object Registers, offset: 0xD
   set ::FTFL_FCCOB9                     0x4002000E ;# Flash Common Command Object Registers, offset: 0xE
   set ::FTFL_FCCOB8                     0x4002000F ;# Flash Common Command Object Registers, offset: 0xF
   set ::FTFL_FPROT                      0x40020010 ;# Program Flash Protection Registers, offset: 0x10 (4 bytes)
   set ::FTFL_FEPROT                     0x40020016 ;# EEPROM Protection Register, offset: 0x16
   set ::FTFL_FDPROT                     0x40020017 ;# Data Flash Protection Register, offset: 0x17

   set ::FTFL_FSTAT_CCIF                 0x80
   set ::FTFL_FSTAT_RDCOLLERR            0x40
   set ::FTFL_FSTAT_ACCERR               0x20
   set ::FTFL_FSTAT_FPVIOL               0x10
   set ::FTFL_FSTAT_MGSTAT0              0x01

   set ::FTFL_FCNFG_CCIE                 0x80
   set ::FTFL_FCNFG_RDCOLLIE             0x40
   set ::FTFL_FCNFG_ERSAREQ              0x20
   set ::FTFL_FCNFG_ERSSUSP              0x10
   set ::FTFL_FCNFG_SWAP                 0x08
   set ::FTFL_FCNFG_PFLSH                0x04
   set ::FTFL_FCNFG_RAMRDY               0x02
   set ::FTFL_FCNFG_EEERDY               0x01

   set ::FTFL_FSEC_KEYEN                 0x80
   set ::FTFL_FSEC_MEEN                  0x30
   set ::FTFL_FSEC_FSLACC                0x0C
   set ::FTFL_FSEC_SEC                   0x02
   set ::FTFL_FSEC_DEFAULT_UNSEC_VALUE   0xBE

   set ::FOPT_LPBOOTn                    0x01
   set ::FOPT_EZPORT                     0x02
   
   ;# Flash commands
   set ::F_RD1BLK                        0x00
   set ::F_RD1SEC                        0x01
   set ::F_PGMCHK                        0x02
   set ::F_RDRSRC                        0x03
   set ::F_PGM4                          0x06
   set ::F_ERSBLK                        0x08
   set ::F_ERSSCR                        0x09
   set ::F_PGMSEC                        0x0B
   set ::F_RD1ALL                        0x40
   set ::F_RDONCE                        0x41
   set ::F_PGMONCE                       0x43
   set ::F_ERSALL                        0x44
   set ::F_VFYKEY                        0x45
   set ::F_PGMPART                       0x80
   set ::F_SETRAM                        0x81
   
   set ::WDOG_UNLOCK                     0x4005200E
   set ::WDOG_UNLOCK_SEQ_1               0xC520
   set ::WDOG_UNLOCK_SEQ_2               0xD928
   set ::WDOG_STCTRLH                    0x40052000
   set ::WDOG_DISABLED_CTRL              0x0012

   set ::BDM_CAP_HCS12                   0x0001  ;# Supports HCS12
   set ::BDM_CAP_RS08                    0x0002  ;# 12 V Flash programming supply available (RS08 support)
   set ::BDM_CAP_VDDCONTROL              0x0004  ;# Control over target Vdd
   set ::BDM_CAP_VDDSENSE                0x0008  ;# Sensing of target Vdd
   set ::BDM_CAP_CFVx                    0x0010  ;# Support for CFV 1,2 & 3
   set ::BDM_CAP_HCS08                   0x0020  ;# Supports HCS08 targets - inverted when queried
   set ::BDM_CAP_CFV1                    0x0040  ;# Supports CFV1 targets  - inverted when queried
   set ::BDM_CAP_JTAG                    0x0080  ;# Supports JTAG targets
   set ::BDM_CAP_DSC                     0x0100  ;# Supports DSC targets
   set ::BDM_CAP_ARM_JTAG                0x0200  ;# Supports ARM targets via JTAG
   set ::BDM_CAP_RST                     0x0400  ;# Control & sensing of RESET
   set ::BDM_CAP_PST                     0x0800  ;# Supports PST signal sensing
   set ::BDM_CAP_CDC                     0x1000  ;# Supports CDC Serial over USB interface
   set ::BDM_CAP_ARM_SWD                 0x2000  ;# Supports ARM targets via SWD
   
   return
}

;######################################################################################
;#
proc executeCommand {} {
   ;# Clear any existing errors
   wb $::FTFL_FSTAT [expr $::FTFL_FSTAT_ACCERR|$::FTFL_FSTAT_FPVIOL]

   ;# Start command
   wb $::FTFL_FSTAT $::FTFL_FSTAT_CCIF

   ;# Wait for command complete
   set flashBusy 0
   set retry 0
   while { $flashBusy == 0} {
      set fstat [ rb $::FTFL_FSTAT ]
      set flashBusy [expr $fstat & $::FTFL_FSTAT_CCIF]
      if [ expr $retry == 10] {
         error "Flash busy timeout"
      }
      after 100
      incr retry
   }
   if [ expr ( $fstat & $::FTFL_FSTAT_ACCERR ) != 0 ] {
      error "Flash access error"
   }
   if [ expr ( $fstat & $::FTFL_FSTAT_FPVIOL ) != 0 ] {
      error "Flash write protect error"
   }  
   if [ expr ( $fstat & $::FTFL_FSTAT_MGSTAT0 ) != 0 ] {
      error "Flash command failed error"
   }  
}

;######################################################################################
;#
proc setFCCOB { cmd addr data } {
   wl $::FTFL_FCCOB3 [expr ($cmd << 24) | $addr]
   rl $::FTFL_FCCOB3
   wl $::FTFL_FCCOB7 $data
   rl $::FTFL_FCCOB7
   rblock $::FTFL_FCCOB3 0x10
}

;######################################################################################
;#
proc programLong { addr data } {
   setFCCOB $::F_PGM4 $addr $data
   executeCommand
}

;######################################################################################
;#
proc eraseBlock { addr } {
   setFCCOB $::F_ERSBLK $addr 0x0
   executeCommand
}

;######################################################################################
;#
;#
proc initTarget { args } {
;# Not used
   return
}

;######################################################################################
;#
;#  frequency - Target bus frequency in kHz
;#
proc initFlash { frequency } {
   ;# Uprotecting flash and caching done  by target routines
   ;# Doesn't work here (H/W bug?)
   return
}

;######################################################################################
;#  Target is mass erased and left unsecured (non-blank!)
;#
proc massEraseTarget { } {

   ;# hold target reset to be sure
   pinSet rst=0

   ;# Cycle power if feature available
   if [expr ( [getcap] & $::BDM_CAP_VDDCONTROL) != 0] {
      ;# puts "Cycling Vdd"
      settargetvdd off
      after 500
      settargetvdd on
      after 100
   }
   
   ;# Connect with reset asserted, ignore errors as may be secured
   catch { connect }
   
   ;# rcreg $::MDM_AP_Status

   ;# Repeatedly try to start erase with core and system reset
   ;# For some reason this appears unreliable on JTAG interface
   ;# with a watchdog timeout or similar reset problem
   set mdmApControlErase [expr $::MDM_AP_C_CORE_HOLD | $::MDM_AP_C_SYSTEM_RESET | $::MDM_AP_C_MASS_ERASE]
   set mdmApControl 0
   ;# puts "Starting erase"
   for {set retry 0} {$retry < 10} {incr retry} {
      after 50
      ;# Write Mass Erase + System Reset + Core Reset
      if { [catch { wcreg $::MDM_AP_Control $mdmApControlErase } ] } {
         ;# puts "wcreg MDM_AP_Control failed"
         continue;
      }      
      ;# Check if Mass Erase confirmed
      if { [catch { set mdmApControl [rcreg $::MDM_AP_Control] } ] } {
         ;# puts "rcreg MDM_AP_Control failed"
         continue;
      }
      if [expr (($mdmApControl & $::MDM_AP_C_MASS_ERASE) == 0)] {
         ;# puts "MDM_AP_C_MASS_ERASE failed"
         continue;
      }
      ;# Check if start Mass Erase confirmed
      set mdmApStatus [rcreg $::MDM_AP_Status]
      if [expr (($mdmApStatus & $::MDM_AP_ST_MASS_ERASE_ACK) != 0)] {
         ;# puts "MDM_AP_ST_MASS_ERASE_ACK success"
         break;
      }      
   }
   
   ;# Wait for erase to complete
   ;# puts "Waiting for erase to finish"
   for {set retry 0} {$retry < 20} {incr retry} {
      after 50;
      set mdmApControl [rcreg $::MDM_AP_Control]
      if [expr (($mdmApControl & $::MDM_AP_C_MASS_ERASE) != 0)] {
         ;# puts "MDM_AP_C_MASS_ERASE still set"
         continue;
      }
      ;# Check if Unsecured confirmed
      set mdmApStatus [rcreg $::MDM_AP_Status]
      if [expr (($mdmApStatus & $::MDM_AP_ST_SYSTEM_SECURITY) == 0)] {
         ;# puts "MDM_AP_ST_SYSTEM_SECURITY success"
         break;
      }    
   }

   ;# Release the system reset
   wcreg $::MDM_AP_Control $::MDM_AP_C_CORE_HOLD

   ;# Release the system reset
   wcreg $::MDM_AP_Control 0

   after 50
   ;# Apply reset to make sure device is unsecured
   reset s s
   
   ;# Reconnect, ignore any errors
   catch { connect }

   ;# Release external reset
   ;#pinSet
   
   if [expr (($mdmApStatus & $::MDM_AP_ST_SYSTEM_SECURITY) != 0)] {
      error "Device is still secured"
   }
   return
}

;######################################################################################
;#
proc isUnsecure { } {
   ;#  puts "Checking if unsecured"
   set securityValue [ rcreg $::MDM_AP_Status ]
   if [ expr ( $securityValue & $::MDM_AP_ST_SYSTEM_SECURITY ) != 0 ] {
      return "Target is secured"
   }
   return
}

;######################################################################################
;# Actions on initial load
;#
loadSymbols

;#]]>
