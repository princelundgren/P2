/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Due (Programming Port), Platform=sam, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __SAM3X8E__
#define USB_VID 0x2341
#define USB_PID 0x003e
#define USBCON
#define USB_MANUFACTURER "\"Unknown\""
#define USB_PRODUCT "\"Arduino Due\""
#define ARDUINO 156
#define ARDUINO_MAIN
#define printf iprintf
#define __SAM__
#define __sam__
#define F_CPU 84000000L
#define __cplusplus
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__

#define __ICCARM__
#define __ASM
#define __INLINE
#define __GNUC__ 0
#define __ICCARM__
#define __ARMCC_VERSION 400678
#define __attribute__(noinline)

#define prog_void
#define PGM_VOID_P int
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}




//
//
static void Thread7(void *arg);
static void Thread3(void *arg);
static void Thread4(void *arg);
static void Thread8(void *arg);
void fr_setup_Calibration();
void re_setup_Calibration();
void fr_filterLoop();
void fr_quick_sort(int fr_sorted_RAW[16], int low, int high);
void re_filterLoop();
void re_quick_sort(int re_sorted_RAW[16], int low, int high);
static void Thread1(void *arg);
void fr_getPhotoArrayValues();
void re_getPhotoArrayValues();
static void Thread5(void *arg);
static void Thread6(void *arg);

#include "C:\Program Files (x86)\Arduino\hardware\arduino\sam\cores\arduino\arduino.h"
#include "C:\Program Files (x86)\Arduino\hardware\arduino\sam\variants\arduino_due_x\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\sam\variants\arduino_due_x\variant.h" 
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\HoverCraftSystem.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\BuzzerFunction.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\ForwardMotor.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\FrontLeftMotor.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\FrontRightMotor.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\LiftFanMotor.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\LineSensorFilter.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\LineSensorRead.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\RearLeftMotor.ino"
#include "\\psf\Workspaces\P2\Software\HoverCraftSystem\RearRightMotor.ino"
#endif
