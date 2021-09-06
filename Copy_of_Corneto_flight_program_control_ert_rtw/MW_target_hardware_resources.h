#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 0
#include "MW_PX4_TaskControl.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE PX4 Pixhawk 2.1 (Cube)
#define MW_CONNECTIONINFO_XCPONSERIAL_BAUDRATE codertarget.pixhawk.internal.getExternalModeBaudrate(hCS);
#define MW_CONNECTIONINFO_XCPONSERIAL_COMPORT codertarget.pixhawk.internal.getExternalSerialPortName(hCS);
#define MW_CONNECTIONINFO_XCPONSERIAL_VERBOSE 1
#define MW_CONNECTIONINFO_SERIAL_IPADDRESS codertarget.pixhawk.registry.getLoopbackIP;
#define MW_CONNECTIONINFO_SERIAL_PORT 17725
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 1
#define MW_EXTMODE_CONFIGURATION XCP on Serial
#define MW_EXTMODE_SIGNALBUFFERSIZE 1024.000000
#define MW_RTOS NuttX
#define MW_RTOSBASERATETASKPRIORITY 250
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 0
#define MW_CMAKECONFIG px4_fmu-v3_default
#define MW_CHANGECMAKECONFIG 48
#define MW_AUTOMATIC_SERIAL_SCAN 1
#define MW_COM_UPLOAD_STORAGE 
#define MW_NUTTX_SERIAL_PORT 
#define MW_SIMULINKIO_ENABLE_SIMULINKIO 1
#define MW_SIMULINKIO_MODELTRANSPORTDATAFCN px4.internal.ConnectedIO.getConfigsetInfo
#define MW_SIMULINKIO_SERVERDEPLOYFCN px4.internal.ConnectedIO.buildAndDeployPX4IOServer
#define MW_CONNECTEDIOSERIALPORT /dev/ttyACM0
#define MW_CONNECTEDIOSERIALPORT_CHECKBOX 0
#define MW_CONNECTEDIOHOSTCOMPORT /dev/tty/ACM1
#define MW_CLOCKING_CPUCLOCKRATEMHZ 168
#define MW_EXTSERIALPORT 0
#define MW_EXTMODESERIALPORT_CHECKBOX 1
#define MW_EXTMODEHOSTCOMPORT 
#define MW_PILSERIALPORT /dev/ttyACM0
#define MW_PILSERIALPORT_CHECKBOX 1
#define MW_PILHOSTCOMPORT COM6
#define MW_I2C_BUS1SPEEDKHZ_INDEX 0
#define MW_I2C_BUS2SPEEDKHZ_INDEX 0
#define MW_I2C_BUS1SPEEDKHZ 100
#define MW_I2C_BUS2SPEEDKHZ 100
#define MW_ENABLEMAVLINKCHECKBOX 1
#define MW_TTYACM0_BAUDRATE 29
#define MW_TTYACM0_PARITY 0
#define MW_TTYACM0_STOPBIT 0
#define MW_TTYACM0_PORTMAP 48
#define MW_TTYS1_BAUDRATE 29
#define MW_TTYS1_PARITY 0
#define MW_TTYS1_STOPBIT 0
#define MW_TTYS1_PORTMAP 48
#define MW_TTYS1HWFLOWCONTROL_CHECKBOX 0
#define MW_TTYS2_BAUDRATE 29
#define MW_TTYS2_PARITY 0
#define MW_TTYS2_STOPBIT 0
#define MW_TTYS2_PORTMAP 48
#define MW_TTYS2HWFLOWCONTROL_CHECKBOX 0
#define MW_TTYS3_BAUDRATE 29
#define MW_TTYS3_PARITY 0
#define MW_TTYS3_STOPBIT 0
#define MW_TTYS3_PORTMAP 48
#define MW_TTYS5_BAUDRATE 29
#define MW_TTYS5_PARITY 0
#define MW_TTYS5_STOPBIT 0
#define MW_TTYS5_PORTMAP 48
#define MW_TTYS6_BAUDRATE 29
#define MW_TTYS6_PARITY 0
#define MW_TTYS6_STOPBIT 0
#define MW_TTYS6_PORTMAP 48
#define MW_PWM_MAIN_ONESHOT 0
#define MW_PWM_MAIN_FREQUENCY 400
#define MW_PWM_AUX_ONESHOT 0
#define MW_PWM_AUX_FREQUENCY 200
#define MW_PWM_CH1_FAILSAFE 900
#define MW_PWM_CH1_DISARMED 900
#define MW_PWM_CH2_FAILSAFE 900
#define MW_PWM_CH2_DISARMED 900
#define MW_PWM_CH3_FAILSAFE 900
#define MW_PWM_CH3_DISARMED 900
#define MW_PWM_CH4_FAILSAFE 900
#define MW_PWM_CH4_DISARMED 900
#define MW_PWM_CH5_FAILSAFE 900
#define MW_PWM_CH5_DISARMED 900
#define MW_PWM_CH6_FAILSAFE 900
#define MW_PWM_CH6_DISARMED 900
#define MW_PWM_CH7_FAILSAFE 900
#define MW_PWM_CH7_DISARMED 900
#define MW_PWM_CH8_FAILSAFE 900
#define MW_PWM_CH8_DISARMED 900
#define MW_PWM_AUX_CH1_FAILSAFE 900
#define MW_PWM_AUX_CH1_DISARMED 900
#define MW_PWM_AUX_CH2_FAILSAFE 900
#define MW_PWM_AUX_CH2_DISARMED 900
#define MW_PWM_AUX_CH3_FAILSAFE 900
#define MW_PWM_AUX_CH3_DISARMED 900
#define MW_PWM_AUX_CH4_FAILSAFE 900
#define MW_PWM_AUX_CH4_DISARMED 900
#define MW_PWM_AUX_CH5_FAILSAFE 900
#define MW_PWM_AUX_CH5_DISARMED 900
#define MW_PWM_AUX_CH6_FAILSAFE 900
#define MW_PWM_AUX_CH6_DISARMED 900
#define MW_HRT_CONSTRAINT 0
#define MW_SEM_WATERMARK 20
#define MW_DATAVERSION 2016.02

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
