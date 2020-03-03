/* Copyright (c) 2016-2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __KGSL_POOL_H
#define __KGSL_POOL_H

#include <linux/mm_types.h>
#include "kgsl_sharedmem.h"

#ifdef CONFIG_QCOM_KGSL_USE_SHMEM
static inline void kgsl_init_page_pools(struct platform_device *pdev) { }
static inline void kgsl_exit_page_pools(void) { }
#else
void kgsl_init_page_pools(struct platform_device *pdev);
void kgsl_exit_page_pools(void);
void kgsl_pool_free_pages(struct page **pages, unsigned int page_count);
int kgsl_pool_alloc_page(int *page_size, struct page **pages,
			unsigned int pages_len, unsigned int *align);
void kgsl_pool_free_page(struct page *p);
bool kgsl_pool_avaialable(int size);
#endif
#endif /* __KGSL_POOL_H */

