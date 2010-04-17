/*
 * Copyright (c) 2007 Intel Corporation. All Rights Reserved.
 * Copyright (c) Imagination Technologies Limited, UK  
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*!
******************************************************************************
@file   : /work/sim/msvdx/register_includes/msvdx_dmac_linked_list.h

@brief  

@Author <Autogenerated>

<b>Description:</b>\n
		This file contains the MSVDX_DMAC_LINKED_LIST_H Definitions.

<b>Platform:</b>\n
		? 

@Version
		1.0

******************************************************************************/

#if !defined (__MSVDX_DMAC_LINKED_LIST_H__)
#define __MSVDX_DMAC_LINKED_LIST_H__

#ifdef __cplusplus
extern "C" {
#endif


#define DMAC_LL_SIZE		(32)

// DMAC_LL     RESERVED_01
#define DMAC_LL_RESERVED_01_ALIGNMENT		(4)
#define DMAC_LL_RESERVED_01_TYPE		IMG_UINT32
#define DMAC_LL_RESERVED_01_MASK		(0x0FFFFFFF)
#define DMAC_LL_RESERVED_01_LSBMASK		(0x0FFFFFFF)
#define DMAC_LL_RESERVED_01_OFFSET		(0x0000)
#define DMAC_LL_RESERVED_01_SHIFT		(0)

// DMAC_LL     PW
#define DMAC_LL_PW_ALIGNMENT		(1)
#define DMAC_LL_PW_TYPE		IMG_UINT8
#define DMAC_LL_PW_MASK		(0x30)
#define DMAC_LL_PW_LSBMASK		(0x03)
#define DMAC_LL_PW_OFFSET		(0x0003)
#define DMAC_LL_PW_SHIFT		(4)

// DMAC_LL     DIR
#define DMAC_LL_DIR_ALIGNMENT		(1)
#define DMAC_LL_DIR_TYPE		IMG_UINT8
#define DMAC_LL_DIR_MASK		(0x40)
#define DMAC_LL_DIR_LSBMASK		(0x01)
#define DMAC_LL_DIR_OFFSET		(0x0003)
#define DMAC_LL_DIR_SHIFT		(6)

// DMAC_LL     BSWAP
#define DMAC_LL_BSWAP_ALIGNMENT		(1)
#define DMAC_LL_BSWAP_TYPE		IMG_UINT8
#define DMAC_LL_BSWAP_MASK		(0x80)
#define DMAC_LL_BSWAP_LSBMASK		(0x01)
#define DMAC_LL_BSWAP_OFFSET		(0x0003)
#define DMAC_LL_BSWAP_SHIFT		(7)

// DMAC_LL     LEN
#define DMAC_LL_LEN_ALIGNMENT		(2)
#define DMAC_LL_LEN_TYPE		IMG_UINT16
#define DMAC_LL_LEN_MASK		(0xFFFF)
#define DMAC_LL_LEN_LSBMASK		(0xFFFF)
#define DMAC_LL_LEN_OFFSET		(0x0004)
#define DMAC_LL_LEN_SHIFT		(0)

// DMAC_LL     INCR
#define DMAC_LL_INCR_ALIGNMENT		(1)
#define DMAC_LL_INCR_TYPE		IMG_UINT8
#define DMAC_LL_INCR_MASK		(0x01)
#define DMAC_LL_INCR_LSBMASK		(0x01)
#define DMAC_LL_INCR_OFFSET		(0x0006)
#define DMAC_LL_INCR_SHIFT		(0)

// DMAC_LL     PI
#define DMAC_LL_PI_ALIGNMENT		(1)
#define DMAC_LL_PI_TYPE		IMG_UINT8
#define DMAC_LL_PI_MASK		(0x06)
#define DMAC_LL_PI_LSBMASK		(0x03)
#define DMAC_LL_PI_OFFSET		(0x0006)
#define DMAC_LL_PI_SHIFT		(1)

// DMAC_LL     RESERVED_02
#define DMAC_LL_RESERVED_02_ALIGNMENT		(2)
#define DMAC_LL_RESERVED_02_TYPE		IMG_UINT16
#define DMAC_LL_RESERVED_02_MASK		(0x3FF8)
#define DMAC_LL_RESERVED_02_LSBMASK		(0x07FF)
#define DMAC_LL_RESERVED_02_OFFSET		(0x0006)
#define DMAC_LL_RESERVED_02_SHIFT		(3)

// DMAC_LL     LIST_INT
#define DMAC_LL_LIST_INT_ALIGNMENT		(1)
#define DMAC_LL_LIST_INT_TYPE		IMG_UINT8
#define DMAC_LL_LIST_INT_MASK		(0x40)
#define DMAC_LL_LIST_INT_LSBMASK		(0x01)
#define DMAC_LL_LIST_INT_OFFSET		(0x0007)
#define DMAC_LL_LIST_INT_SHIFT		(6)

// DMAC_LL     LIST_FIN
#define DMAC_LL_LIST_FIN_ALIGNMENT		(1)
#define DMAC_LL_LIST_FIN_TYPE		IMG_UINT8
#define DMAC_LL_LIST_FIN_MASK		(0x80)
#define DMAC_LL_LIST_FIN_LSBMASK		(0x01)
#define DMAC_LL_LIST_FIN_OFFSET		(0x0007)
#define DMAC_LL_LIST_FIN_SHIFT		(7)

// DMAC_LL     ADDR
#define DMAC_LL_ADDR_ALIGNMENT		(4)
#define DMAC_LL_ADDR_TYPE		IMG_UINT32
#define DMAC_LL_ADDR_MASK		(0xFFFFFFFF)
#define DMAC_LL_ADDR_LSBMASK		(0xFFFFFFFF)
#define DMAC_LL_ADDR_OFFSET		(0x0008)
#define DMAC_LL_ADDR_SHIFT		(0)

// DMAC_LL     EXT_SA
#define DMAC_LL_EXT_SA_ALIGNMENT		(1)
#define DMAC_LL_EXT_SA_TYPE		IMG_UINT8
#define DMAC_LL_EXT_SA_MASK		(0x0F)
#define DMAC_LL_EXT_SA_LSBMASK		(0x0F)
#define DMAC_LL_EXT_SA_OFFSET		(0x000C)
#define DMAC_LL_EXT_SA_SHIFT		(0)

// DMAC_LL     RESERVED_04
#define DMAC_LL_RESERVED_04_ALIGNMENT		(4)
#define DMAC_LL_RESERVED_04_TYPE		IMG_UINT32
#define DMAC_LL_RESERVED_04_MASK		(0x03FFFFF0)
#define DMAC_LL_RESERVED_04_LSBMASK		(0x003FFFFF)
#define DMAC_LL_RESERVED_04_OFFSET		(0x000C)
#define DMAC_LL_RESERVED_04_SHIFT		(4)

// DMAC_LL     BURST
#define DMAC_LL_BURST_ALIGNMENT		(1)
#define DMAC_LL_BURST_TYPE		IMG_UINT8
#define DMAC_LL_BURST_MASK		(0x1C)
#define DMAC_LL_BURST_LSBMASK		(0x07)
#define DMAC_LL_BURST_OFFSET		(0x000F)
#define DMAC_LL_BURST_SHIFT		(2)

// DMAC_LL     ACC_DEL
#define DMAC_LL_ACC_DEL_ALIGNMENT		(1)
#define DMAC_LL_ACC_DEL_TYPE		IMG_UINT8
#define DMAC_LL_ACC_DEL_MASK		(0xE0)
#define DMAC_LL_ACC_DEL_LSBMASK		(0x07)
#define DMAC_LL_ACC_DEL_OFFSET		(0x000F)
#define DMAC_LL_ACC_DEL_SHIFT		(5)

// DMAC_LL     REP_COUNT
#define DMAC_LL_REP_COUNT_ALIGNMENT		(2)
#define DMAC_LL_REP_COUNT_TYPE		IMG_UINT16
#define DMAC_LL_REP_COUNT_MASK		(0x07FF)
#define DMAC_LL_REP_COUNT_LSBMASK		(0x07FF)
#define DMAC_LL_REP_COUNT_OFFSET		(0x0010)
#define DMAC_LL_REP_COUNT_SHIFT		(0)

// DMAC_LL     RESERVED_05
#define DMAC_LL_RESERVED_05_ALIGNMENT		(1)
#define DMAC_LL_RESERVED_05_TYPE		IMG_UINT8
#define DMAC_LL_RESERVED_05_MASK		(0xF8)
#define DMAC_LL_RESERVED_05_LSBMASK		(0x1F)
#define DMAC_LL_RESERVED_05_OFFSET		(0x0011)
#define DMAC_LL_RESERVED_05_SHIFT		(3)

// DMAC_LL     MODE_2D
#define DMAC_LL_MODE_2D_ALIGNMENT		(1)
#define DMAC_LL_MODE_2D_TYPE		IMG_UINT8
#define DMAC_LL_MODE_2D_MASK		(0x01)
#define DMAC_LL_MODE_2D_LSBMASK		(0x01)
#define DMAC_LL_MODE_2D_OFFSET		(0x0012)
#define DMAC_LL_MODE_2D_SHIFT		(0)

// DMAC_LL     RESERVED_06
#define DMAC_LL_RESERVED_06_ALIGNMENT		(2)
#define DMAC_LL_RESERVED_06_TYPE		IMG_UINT16
#define DMAC_LL_RESERVED_06_MASK		(0xFFFE)
#define DMAC_LL_RESERVED_06_LSBMASK		(0x7FFF)
#define DMAC_LL_RESERVED_06_OFFSET		(0x0012)
#define DMAC_LL_RESERVED_06_SHIFT		(1)

// DMAC_LL     ROW_LENGTH
#define DMAC_LL_ROW_LENGTH_ALIGNMENT		(2)
#define DMAC_LL_ROW_LENGTH_TYPE		IMG_UINT16
#define DMAC_LL_ROW_LENGTH_MASK		(0x03FF)
#define DMAC_LL_ROW_LENGTH_LSBMASK		(0x03FF)
#define DMAC_LL_ROW_LENGTH_OFFSET		(0x0014)
#define DMAC_LL_ROW_LENGTH_SHIFT		(0)

// DMAC_LL     RESERVED_07
#define DMAC_LL_RESERVED_07_ALIGNMENT		(1)
#define DMAC_LL_RESERVED_07_TYPE		IMG_UINT8
#define DMAC_LL_RESERVED_07_MASK		(0xFC)
#define DMAC_LL_RESERVED_07_LSBMASK		(0x3F)
#define DMAC_LL_RESERVED_07_OFFSET		(0x0015)
#define DMAC_LL_RESERVED_07_SHIFT		(2)

// DMAC_LL     LINE_ADD_OFF
#define DMAC_LL_LINE_ADD_OFF_ALIGNMENT		(2)
#define DMAC_LL_LINE_ADD_OFF_TYPE		IMG_UINT16
#define DMAC_LL_LINE_ADD_OFF_MASK		(0x03FF)
#define DMAC_LL_LINE_ADD_OFF_LSBMASK		(0x03FF)
#define DMAC_LL_LINE_ADD_OFF_OFFSET		(0x0016)
#define DMAC_LL_LINE_ADD_OFF_SHIFT		(0)

// DMAC_LL     RESERVED_08
#define DMAC_LL_RESERVED_08_ALIGNMENT		(1)
#define DMAC_LL_RESERVED_08_TYPE		IMG_UINT8
#define DMAC_LL_RESERVED_08_MASK		(0xFC)
#define DMAC_LL_RESERVED_08_LSBMASK		(0x3F)
#define DMAC_LL_RESERVED_08_OFFSET		(0x0017)
#define DMAC_LL_RESERVED_08_SHIFT		(2)

// DMAC_LL     SA
#define DMAC_LL_SA_ALIGNMENT		(4)
#define DMAC_LL_SA_TYPE		IMG_UINT32
#define DMAC_LL_SA_MASK		(0xFFFFFFFF)
#define DMAC_LL_SA_LSBMASK		(0xFFFFFFFF)
#define DMAC_LL_SA_OFFSET		(0x0018)
#define DMAC_LL_SA_SHIFT		(0)

// DMAC_LL     LISTPTR
#define DMAC_LL_LISTPTR_ALIGNMENT		(4)
#define DMAC_LL_LISTPTR_TYPE		IMG_UINT32
#define DMAC_LL_LISTPTR_MASK		(0xFFFFFFFF)
#define DMAC_LL_LISTPTR_LSBMASK		(0xFFFFFFFF)
#define DMAC_LL_LISTPTR_OFFSET		(0x001C)
#define DMAC_LL_LISTPTR_SHIFT		(0)



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_DMAC_LINKED_LIST_H__ */
