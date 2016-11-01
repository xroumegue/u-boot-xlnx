/*
 * (C) Copyright 2013 Xilinx, Inc.
 *
 * Configuration for Zynq Evaluation and Development Board - ZedBoard
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_ZTURN_H
#define __CONFIG_ZYNQ_ZTURN_H

#define CONFIG_SYS_SDRAM_SIZE		(1024 * 1024 * 1024)
#define	PHYS_SDRAM_1_SIZE	(1024 * 1024 * 1024)

#define CONFIG_ZYNQ_SERIAL_UART1
#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0	0

#define CONFIG_ZYNQ_USB
#define CONFIG_ZYNQ_SDHCI0

#define CONFIG_ENV_OFFSET		0x080000
#define CONFIG_ENV_SIZE			(128*1024)
#define CONFIG_ENV_SECT_SIZE		(4*1024) // W25Q128 is 4KB sector type


#define CONFIG_ZYNQ_BOOT_FREEBSD

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_ZTURN_H */
