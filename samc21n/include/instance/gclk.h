/**
 * \file
 *
 * \brief Instance description for GCLK
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMC21_GCLK_INSTANCE_
#define _SAMC21_GCLK_INSTANCE_

/* ========== Register definition for GCLK peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_GCLK_CTRLA             (0x40001C00) /**< \brief (GCLK) Control */
#define REG_GCLK_SYNCBUSY          (0x40001C04) /**< \brief (GCLK) Synchronization Busy */
#define REG_GCLK_GENCTRL0          (0x40001C20) /**< \brief (GCLK) Generic Clock Generator Control 0 */
#define REG_GCLK_GENCTRL1          (0x40001C24) /**< \brief (GCLK) Generic Clock Generator Control 1 */
#define REG_GCLK_GENCTRL2          (0x40001C28) /**< \brief (GCLK) Generic Clock Generator Control 2 */
#define REG_GCLK_GENCTRL3          (0x40001C2C) /**< \brief (GCLK) Generic Clock Generator Control 3 */
#define REG_GCLK_GENCTRL4          (0x40001C30) /**< \brief (GCLK) Generic Clock Generator Control 4 */
#define REG_GCLK_GENCTRL5          (0x40001C34) /**< \brief (GCLK) Generic Clock Generator Control 5 */
#define REG_GCLK_GENCTRL6          (0x40001C38) /**< \brief (GCLK) Generic Clock Generator Control 6 */
#define REG_GCLK_GENCTRL7          (0x40001C3C) /**< \brief (GCLK) Generic Clock Generator Control 7 */
#define REG_GCLK_GENCTRL8          (0x40001C40) /**< \brief (GCLK) Generic Clock Generator Control 8 */
#define REG_GCLK_PCHCTRL0          (0x40001C80) /**< \brief (GCLK) Peripheral Clock Control 0 */
#define REG_GCLK_PCHCTRL1          (0x40001C84) /**< \brief (GCLK) Peripheral Clock Control 1 */
#define REG_GCLK_PCHCTRL2          (0x40001C88) /**< \brief (GCLK) Peripheral Clock Control 2 */
#define REG_GCLK_PCHCTRL3          (0x40001C8C) /**< \brief (GCLK) Peripheral Clock Control 3 */
#define REG_GCLK_PCHCTRL4          (0x40001C90) /**< \brief (GCLK) Peripheral Clock Control 4 */
#define REG_GCLK_PCHCTRL5          (0x40001C94) /**< \brief (GCLK) Peripheral Clock Control 5 */
#define REG_GCLK_PCHCTRL6          (0x40001C98) /**< \brief (GCLK) Peripheral Clock Control 6 */
#define REG_GCLK_PCHCTRL7          (0x40001C9C) /**< \brief (GCLK) Peripheral Clock Control 7 */
#define REG_GCLK_PCHCTRL8          (0x40001CA0) /**< \brief (GCLK) Peripheral Clock Control 8 */
#define REG_GCLK_PCHCTRL9          (0x40001CA4) /**< \brief (GCLK) Peripheral Clock Control 9 */
#define REG_GCLK_PCHCTRL10         (0x40001CA8) /**< \brief (GCLK) Peripheral Clock Control 10 */
#define REG_GCLK_PCHCTRL11         (0x40001CAC) /**< \brief (GCLK) Peripheral Clock Control 11 */
#define REG_GCLK_PCHCTRL12         (0x40001CB0) /**< \brief (GCLK) Peripheral Clock Control 12 */
#define REG_GCLK_PCHCTRL13         (0x40001CB4) /**< \brief (GCLK) Peripheral Clock Control 13 */
#define REG_GCLK_PCHCTRL14         (0x40001CB8) /**< \brief (GCLK) Peripheral Clock Control 14 */
#define REG_GCLK_PCHCTRL15         (0x40001CBC) /**< \brief (GCLK) Peripheral Clock Control 15 */
#define REG_GCLK_PCHCTRL16         (0x40001CC0) /**< \brief (GCLK) Peripheral Clock Control 16 */
#define REG_GCLK_PCHCTRL17         (0x40001CC4) /**< \brief (GCLK) Peripheral Clock Control 17 */
#define REG_GCLK_PCHCTRL18         (0x40001CC8) /**< \brief (GCLK) Peripheral Clock Control 18 */
#define REG_GCLK_PCHCTRL19         (0x40001CCC) /**< \brief (GCLK) Peripheral Clock Control 19 */
#define REG_GCLK_PCHCTRL20         (0x40001CD0) /**< \brief (GCLK) Peripheral Clock Control 20 */
#define REG_GCLK_PCHCTRL21         (0x40001CD4) /**< \brief (GCLK) Peripheral Clock Control 21 */
#define REG_GCLK_PCHCTRL22         (0x40001CD8) /**< \brief (GCLK) Peripheral Clock Control 22 */
#define REG_GCLK_PCHCTRL23         (0x40001CDC) /**< \brief (GCLK) Peripheral Clock Control 23 */
#define REG_GCLK_PCHCTRL24         (0x40001CE0) /**< \brief (GCLK) Peripheral Clock Control 24 */
#define REG_GCLK_PCHCTRL25         (0x40001CE4) /**< \brief (GCLK) Peripheral Clock Control 25 */
#define REG_GCLK_PCHCTRL26         (0x40001CE8) /**< \brief (GCLK) Peripheral Clock Control 26 */
#define REG_GCLK_PCHCTRL27         (0x40001CEC) /**< \brief (GCLK) Peripheral Clock Control 27 */
#define REG_GCLK_PCHCTRL28         (0x40001CF0) /**< \brief (GCLK) Peripheral Clock Control 28 */
#define REG_GCLK_PCHCTRL29         (0x40001CF4) /**< \brief (GCLK) Peripheral Clock Control 29 */
#define REG_GCLK_PCHCTRL30         (0x40001CF8) /**< \brief (GCLK) Peripheral Clock Control 30 */
#define REG_GCLK_PCHCTRL31         (0x40001CFC) /**< \brief (GCLK) Peripheral Clock Control 31 */
#define REG_GCLK_PCHCTRL32         (0x40001D00) /**< \brief (GCLK) Peripheral Clock Control 32 */
#define REG_GCLK_PCHCTRL33         (0x40001D04) /**< \brief (GCLK) Peripheral Clock Control 33 */
#define REG_GCLK_PCHCTRL34         (0x40001D08) /**< \brief (GCLK) Peripheral Clock Control 34 */
#define REG_GCLK_PCHCTRL35         (0x40001D0C) /**< \brief (GCLK) Peripheral Clock Control 35 */
#define REG_GCLK_PCHCTRL36         (0x40001D10) /**< \brief (GCLK) Peripheral Clock Control 36 */
#define REG_GCLK_PCHCTRL37         (0x40001D14) /**< \brief (GCLK) Peripheral Clock Control 37 */
#define REG_GCLK_PCHCTRL38         (0x40001D18) /**< \brief (GCLK) Peripheral Clock Control 38 */
#define REG_GCLK_PCHCTRL39         (0x40001D1C) /**< \brief (GCLK) Peripheral Clock Control 39 */
#define REG_GCLK_PCHCTRL40         (0x40001D20) /**< \brief (GCLK) Peripheral Clock Control 40 */
#define REG_GCLK_PCHCTRL41         (0x40001D24) /**< \brief (GCLK) Peripheral Clock Control 41 */
#define REG_GCLK_PCHCTRL42         (0x40001D28) /**< \brief (GCLK) Peripheral Clock Control 42 */
#define REG_GCLK_PCHCTRL43         (0x40001D2C) /**< \brief (GCLK) Peripheral Clock Control 43 */
#define REG_GCLK_PCHCTRL44         (0x40001D30) /**< \brief (GCLK) Peripheral Clock Control 44 */
#define REG_GCLK_PCHCTRL45         (0x40001D34) /**< \brief (GCLK) Peripheral Clock Control 45 */
#else
#define REG_GCLK_CTRLA             (*(RwReg8 *)0x40001C00UL) /**< \brief (GCLK) Control */
#define REG_GCLK_SYNCBUSY          (*(RoReg  *)0x40001C04UL) /**< \brief (GCLK) Synchronization Busy */
#define REG_GCLK_GENCTRL0          (*(RwReg  *)0x40001C20UL) /**< \brief (GCLK) Generic Clock Generator Control 0 */
#define REG_GCLK_GENCTRL1          (*(RwReg  *)0x40001C24UL) /**< \brief (GCLK) Generic Clock Generator Control 1 */
#define REG_GCLK_GENCTRL2          (*(RwReg  *)0x40001C28UL) /**< \brief (GCLK) Generic Clock Generator Control 2 */
#define REG_GCLK_GENCTRL3          (*(RwReg  *)0x40001C2CUL) /**< \brief (GCLK) Generic Clock Generator Control 3 */
#define REG_GCLK_GENCTRL4          (*(RwReg  *)0x40001C30UL) /**< \brief (GCLK) Generic Clock Generator Control 4 */
#define REG_GCLK_GENCTRL5          (*(RwReg  *)0x40001C34UL) /**< \brief (GCLK) Generic Clock Generator Control 5 */
#define REG_GCLK_GENCTRL6          (*(RwReg  *)0x40001C38UL) /**< \brief (GCLK) Generic Clock Generator Control 6 */
#define REG_GCLK_GENCTRL7          (*(RwReg  *)0x40001C3CUL) /**< \brief (GCLK) Generic Clock Generator Control 7 */
#define REG_GCLK_GENCTRL8          (*(RwReg  *)0x40001C40UL) /**< \brief (GCLK) Generic Clock Generator Control 8 */
#define REG_GCLK_PCHCTRL0          (*(RwReg  *)0x40001C80UL) /**< \brief (GCLK) Peripheral Clock Control 0 */
#define REG_GCLK_PCHCTRL1          (*(RwReg  *)0x40001C84UL) /**< \brief (GCLK) Peripheral Clock Control 1 */
#define REG_GCLK_PCHCTRL2          (*(RwReg  *)0x40001C88UL) /**< \brief (GCLK) Peripheral Clock Control 2 */
#define REG_GCLK_PCHCTRL3          (*(RwReg  *)0x40001C8CUL) /**< \brief (GCLK) Peripheral Clock Control 3 */
#define REG_GCLK_PCHCTRL4          (*(RwReg  *)0x40001C90UL) /**< \brief (GCLK) Peripheral Clock Control 4 */
#define REG_GCLK_PCHCTRL5          (*(RwReg  *)0x40001C94UL) /**< \brief (GCLK) Peripheral Clock Control 5 */
#define REG_GCLK_PCHCTRL6          (*(RwReg  *)0x40001C98UL) /**< \brief (GCLK) Peripheral Clock Control 6 */
#define REG_GCLK_PCHCTRL7          (*(RwReg  *)0x40001C9CUL) /**< \brief (GCLK) Peripheral Clock Control 7 */
#define REG_GCLK_PCHCTRL8          (*(RwReg  *)0x40001CA0UL) /**< \brief (GCLK) Peripheral Clock Control 8 */
#define REG_GCLK_PCHCTRL9          (*(RwReg  *)0x40001CA4UL) /**< \brief (GCLK) Peripheral Clock Control 9 */
#define REG_GCLK_PCHCTRL10         (*(RwReg  *)0x40001CA8UL) /**< \brief (GCLK) Peripheral Clock Control 10 */
#define REG_GCLK_PCHCTRL11         (*(RwReg  *)0x40001CACUL) /**< \brief (GCLK) Peripheral Clock Control 11 */
#define REG_GCLK_PCHCTRL12         (*(RwReg  *)0x40001CB0UL) /**< \brief (GCLK) Peripheral Clock Control 12 */
#define REG_GCLK_PCHCTRL13         (*(RwReg  *)0x40001CB4UL) /**< \brief (GCLK) Peripheral Clock Control 13 */
#define REG_GCLK_PCHCTRL14         (*(RwReg  *)0x40001CB8UL) /**< \brief (GCLK) Peripheral Clock Control 14 */
#define REG_GCLK_PCHCTRL15         (*(RwReg  *)0x40001CBCUL) /**< \brief (GCLK) Peripheral Clock Control 15 */
#define REG_GCLK_PCHCTRL16         (*(RwReg  *)0x40001CC0UL) /**< \brief (GCLK) Peripheral Clock Control 16 */
#define REG_GCLK_PCHCTRL17         (*(RwReg  *)0x40001CC4UL) /**< \brief (GCLK) Peripheral Clock Control 17 */
#define REG_GCLK_PCHCTRL18         (*(RwReg  *)0x40001CC8UL) /**< \brief (GCLK) Peripheral Clock Control 18 */
#define REG_GCLK_PCHCTRL19         (*(RwReg  *)0x40001CCCUL) /**< \brief (GCLK) Peripheral Clock Control 19 */
#define REG_GCLK_PCHCTRL20         (*(RwReg  *)0x40001CD0UL) /**< \brief (GCLK) Peripheral Clock Control 20 */
#define REG_GCLK_PCHCTRL21         (*(RwReg  *)0x40001CD4UL) /**< \brief (GCLK) Peripheral Clock Control 21 */
#define REG_GCLK_PCHCTRL22         (*(RwReg  *)0x40001CD8UL) /**< \brief (GCLK) Peripheral Clock Control 22 */
#define REG_GCLK_PCHCTRL23         (*(RwReg  *)0x40001CDCUL) /**< \brief (GCLK) Peripheral Clock Control 23 */
#define REG_GCLK_PCHCTRL24         (*(RwReg  *)0x40001CE0UL) /**< \brief (GCLK) Peripheral Clock Control 24 */
#define REG_GCLK_PCHCTRL25         (*(RwReg  *)0x40001CE4UL) /**< \brief (GCLK) Peripheral Clock Control 25 */
#define REG_GCLK_PCHCTRL26         (*(RwReg  *)0x40001CE8UL) /**< \brief (GCLK) Peripheral Clock Control 26 */
#define REG_GCLK_PCHCTRL27         (*(RwReg  *)0x40001CECUL) /**< \brief (GCLK) Peripheral Clock Control 27 */
#define REG_GCLK_PCHCTRL28         (*(RwReg  *)0x40001CF0UL) /**< \brief (GCLK) Peripheral Clock Control 28 */
#define REG_GCLK_PCHCTRL29         (*(RwReg  *)0x40001CF4UL) /**< \brief (GCLK) Peripheral Clock Control 29 */
#define REG_GCLK_PCHCTRL30         (*(RwReg  *)0x40001CF8UL) /**< \brief (GCLK) Peripheral Clock Control 30 */
#define REG_GCLK_PCHCTRL31         (*(RwReg  *)0x40001CFCUL) /**< \brief (GCLK) Peripheral Clock Control 31 */
#define REG_GCLK_PCHCTRL32         (*(RwReg  *)0x40001D00UL) /**< \brief (GCLK) Peripheral Clock Control 32 */
#define REG_GCLK_PCHCTRL33         (*(RwReg  *)0x40001D04UL) /**< \brief (GCLK) Peripheral Clock Control 33 */
#define REG_GCLK_PCHCTRL34         (*(RwReg  *)0x40001D08UL) /**< \brief (GCLK) Peripheral Clock Control 34 */
#define REG_GCLK_PCHCTRL35         (*(RwReg  *)0x40001D0CUL) /**< \brief (GCLK) Peripheral Clock Control 35 */
#define REG_GCLK_PCHCTRL36         (*(RwReg  *)0x40001D10UL) /**< \brief (GCLK) Peripheral Clock Control 36 */
#define REG_GCLK_PCHCTRL37         (*(RwReg  *)0x40001D14UL) /**< \brief (GCLK) Peripheral Clock Control 37 */
#define REG_GCLK_PCHCTRL38         (*(RwReg  *)0x40001D18UL) /**< \brief (GCLK) Peripheral Clock Control 38 */
#define REG_GCLK_PCHCTRL39         (*(RwReg  *)0x40001D1CUL) /**< \brief (GCLK) Peripheral Clock Control 39 */
#define REG_GCLK_PCHCTRL40         (*(RwReg  *)0x40001D20UL) /**< \brief (GCLK) Peripheral Clock Control 40 */
#define REG_GCLK_PCHCTRL41         (*(RwReg  *)0x40001D24UL) /**< \brief (GCLK) Peripheral Clock Control 41 */
#define REG_GCLK_PCHCTRL42         (*(RwReg  *)0x40001D28UL) /**< \brief (GCLK) Peripheral Clock Control 42 */
#define REG_GCLK_PCHCTRL43         (*(RwReg  *)0x40001D2CUL) /**< \brief (GCLK) Peripheral Clock Control 43 */
#define REG_GCLK_PCHCTRL44         (*(RwReg  *)0x40001D30UL) /**< \brief (GCLK) Peripheral Clock Control 44 */
#define REG_GCLK_PCHCTRL45         (*(RwReg  *)0x40001D34UL) /**< \brief (GCLK) Peripheral Clock Control 45 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for GCLK peripheral ========== */
#define GCLK_GENDIV_BITS            16      
#define GCLK_GEN_BITS               4       
#define GCLK_GEN_NUM                9        // Number of Generic Clock Generators
#define GCLK_GEN_NUM_MSB            8        // Number of Generic Clock Generators - 1
#define GCLK_GEN_SOURCE_NUM_MSB     7        // Number of Generic Clock Sources - 1
#define GCLK_NUM                    46       // Number of Generic Clock Users
#define GCLK_SOURCE_BITS            3       
#define GCLK_SOURCE_DFLL48M                 
#define GCLK_SOURCE_FDPLL           7       
#define GCLK_SOURCE_GCLKGEN1        2       
#define GCLK_SOURCE_GCLKIN          1       
#define GCLK_SOURCE_NUM             8        // Number of Generic Clock Sources
#define GCLK_SOURCE_OSCULP32K       3       
#define GCLK_SOURCE_OSC32K          4       
#define GCLK_SOURCE_XOSC            0       
#define GCLK_SOURCE_XOSC32K         5       

#endif /* _SAMC21_GCLK_INSTANCE_ */
