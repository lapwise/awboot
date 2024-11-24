#ifndef __LOADERS_H__
#define __LOADERS_H__

#include "board.h"

#if defined(CONFIG_BOOT_SDCARD) || defined(CONFIG_BOOT_MMC)
int	 mount_sdmmc(void);
void unmount_sdmmc(void);
int	 read_file(const char *filename, uint8_t *dest);
int	 load_sdmmc(image_info_t *image);
#endif

#ifdef CONFIG_BOOT_SPINAND
int load_spi_nand(sunxi_spi_t *spi, image_info_t *image);
#endif

#endif
