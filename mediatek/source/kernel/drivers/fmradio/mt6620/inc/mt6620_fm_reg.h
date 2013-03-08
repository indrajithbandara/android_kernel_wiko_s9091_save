/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2011. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

#ifndef __MT6620_FM_REG_H__
#define __MT6620_FM_REG_H__

enum MT6620_REG{ 
	FM_MAIN_CG1_CTRL = 0x60,
	FM_MAIN_CG2_CTRL = 0x61,
    FM_MAIN_HWVER = 0x62,
    FM_MAIN_CTRL = 0x63,
    FM_CHANNEL_SET = 0x65,
    FM_MAIN_CFG1 = 0x66,
    FM_MAIN_CFG2 = 0x67,
    FM_MAIN_MCLKDESENSE = 0x38,
    FM_MAIN_INTR = 0x69,
    FM_MAIN_INTRMASK = 0x6A,
    FM_MAIN_EXTINTRMASK = 0x6B,
    FM_RSSI_IND = 0xE8,
    FM_RSSI_TH = 0x6D,
    FM_MAIN_RESET = 0x6E,
    FM_MAIN_CHANDETSTAT = 0x6F,  
    FM_RDS_CFG0 = 0x80,
    FM_RDS_INFO = 0x81,
    FM_RDS_DATA_REG = 0x82,
    FM_RDS_GOODBK_CNT = 0xC6, //page3 0xC6
    FM_RDS_BADBK_CNT = 0xC7,  //page3 0xC7
    FM_RDS_PWDI = 0x85,
    FM_RDS_PWDQ = 0x86,
    FM_RDS_FIFO_STATUS0 = 0x87,
    FM_FT_CON9 = 0x8F,
	FM_DSP_PATCH_CTRL = 0x90,
	FM_DSP_PATCH_OFFSET = 0x91,
	FM_DSP_PATCH_DATA = 0x92,
	FM_DSP_MEM_CTRL4 = 0x93,
	FM_MAIN_PGSEL = 0x9F,
	FM_ADDR_PAMD = 0xE9,
	FM_RDS_BDGRP_ABD_CTRL_REG = 0xB6,
	FM_RDS_POINTER = 0xF0,   
};

//RDS_BDGRP_ABD_CTRL_REG
enum{
	BDGRP_ABD_EN = 0x0001,
	BER_RUN = 0x2000
};
#define FM_DAC_CON1 0x83
#define FM_DAC_CON2 0x84
#define FM_FT_CON0 0x86
enum{
	FT_EN = 0x0001
};
	   
#define FM_I2S_CON0 0x90
enum{
	I2S_EN = 0x0001,
	FORMAT = 0x0002,
	WLEN = 0x0004,
	I2S_SRC = 0x0008
};

//FM_MAIN_CTRL
enum{
	TUNE = 0x0001,
	SEEK = 0x0002,
	SCAN = 0x0004,
	RDS_MASK = 0x0010,
	MUTE = 0x0020,
	RDS_BRST = 0x0040,
	RAMP_DOWN = 0x0100,
};

//FM_MAIN_INTR
enum{
	FM_INTR_STC_DONE = 0x0001,
	FM_INTR_IQCAL_DONE = 0x0002,				
	FM_INTR_DESENSE_HIT	= 0x0004,				
	FM_INTR_CHNL_CHG = 0x0008,				
	FM_INTR_SW_INTR = 0x0010,	
	FM_INTR_RDS = 0x0020
};

enum{
	ANTENNA_TYPE = 0x0010,
};

#endif //__MT6620_FM_REG_H__

