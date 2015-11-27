/* 
 *  Copyright (c) 2015 Robin Callender. All Rights Reserved.
 */
#ifndef _CONFIG_H__
#define _CONFIG_H__

#include <stdint.h>

#include "bsp.h"

#define IS_SRVC_CHANGED_CHARACT_PRESENT 1                                 /* Include or not the service_changed characteristic. if not enabled, the server's database cannot be changed for the lifetime of the device*/

#define APP_CFG_NON_CONN_ADV_TIMEOUT    0                                 /* Time for which the device must be advertising in non-connectable mode (in seconds). 0 disables timeout. */
#define NON_CONNECTABLE_ADV_INTERVAL    MSEC_TO_UNITS(100, UNIT_0_625_MS) /* The advertising interval for non-connectable advertisement (100 ms). This value can vary between 100ms to 10.24s). */

#define DEAD_BEEF                       0xDEADBEEF                        /* Value used as error code on stack dump, can be used to identify stack location on stack unwind. */

#define APP_TIMER_PRESCALER             0                                 /* Value of the RTC1 PRESCALER register. */
#define APP_TIMER_MAX_TIMERS            (2+BSP_APP_TIMERS_NUMBER)         /* Maximum number of simultaneously created timers. */
#define APP_TIMER_OP_QUEUE_SIZE         4                                 /* Size of timer operation queues. */


#define APP_MEASURED_RSSI               0xC3                              /* The Beacon's measured RSSI at 1 meter distance in dBm. */

#define VBAT_MAX_IN_MV                  3300

#define EDDYSTONE_UID                   0
#define EDDYSTONE_URL                   1
#define EDDYSTONE_TLM                   2

#define APP_SERVICE_HANDLE_START        0x000C                            /* Handle of first application specific service when when service changed characteristic is present. */
#define BLE_HANDLE_MAX                  0xFFFF                            /* Max handle value in BLE. */

#define URL_STRING                      "google.com"
#define URL_LENGTH                      (sizeof(URL_STRING) - 1)


#if defined(USE_UICR_FOR_MAJ_MIN_VALUES)
  #define MAJ_VAL_OFFSET_IN_BEACON_INFO   18                              /* Position of the MSB of the Major Value in m_beacon_info array. */
  #define UICR_ADDRESS                    0x10001080                      /* Address of the UICR register used by this example. The major and minor versions to be encoded into the advertising data will be picked up from this location. */
#endif

#endif /* _CONFIG_H__ */