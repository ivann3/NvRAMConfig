/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
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

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_hcf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_HCF_DEFAULT_H
#define AUDIO_HCF_DEFAULT_H
#if defined(MTK_AUDIO_BLOUD_CUSTOMPARAMETER_V5)
#define BES_LOUDNESS_HCF_L_HPF_FC       0
#define BES_LOUDNESS_HCF_L_HPF_ORDER    0
#define BES_LOUDNESS_HCF_L_BPF_FC       0,200,300,400,500,600,0,0
#define BES_LOUDNESS_HCF_L_BPF_BW       0,400,600,500,400,200,0,0
#define BES_LOUDNESS_HCF_L_BPF_GAIN     0 << 8,2 << 8,2 << 8,2 << 8,2 << 8,2 << 8,0 << 8,0 << 8
#define BES_LOUDNESS_HCF_L_LPF_FC       10000
#define BES_LOUDNESS_HCF_L_LPF_ORDER    2
#define BES_LOUDNESS_HCF_R_HPF_FC       0
#define BES_LOUDNESS_HCF_R_HPF_ORDER    0
#define BES_LOUDNESS_HCF_R_BPF_FC       0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_R_BPF_BW       0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_R_BPF_GAIN     0 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8
#define BES_LOUDNESS_HCF_R_LPF_FC       0
#define BES_LOUDNESS_HCF_R_LPF_ORDER    0

#define BES_LOUDNESS_HCF_SEP_LR_FILTER  0

#define BES_LOUDNESS_HCF_WS_GAIN_MAX    0
#define BES_LOUDNESS_HCF_WS_GAIN_MIN    0
#define BES_LOUDNESS_HCF_FILTER_FIRST   0

#define BES_LOUDNESS_HCF_NUM_BANDS      0
#define BES_LOUDNESS_HCF_FLT_BANK_ORDER 0
#define BES_LOUDNESS_HCF_DRC_DELAY      0
#define BES_LOUDNESS_HCF_CROSSOVER_FREQ 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_SB_MODE        0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_SB_GAIN        0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_GAIN_MAP_IN    \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_GAIN_MAP_OUT   \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_ATT_TIME       \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_REL_TIME       \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_HCF_HYST_TH        \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0
   
#define BES_LOUDNESS_HCF_LIM_TH     0
#define BES_LOUDNESS_HCF_LIM_GN     0
#define BES_LOUDNESS_HCF_LIM_CONST  0
#define BES_LOUDNESS_HCF_LIM_DELAY  0

#elif defined(MTK_AUDIO_BLOUD_CUSTOMPARAMETER_V4)
    /* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
    
	#define BES_LOUDNESS_HCF_HSF_COEFF \
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
\
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 

   

    /* Compensation Filter BPF coeffs: default all pass filter      */ 
    #define BES_LOUDNESS_HCF_BPF_COEFF \
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
\
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
\
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \         
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \     
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \    
\
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000     
    
    #define BES_LOUDNESS_HCF_LPF_COEFF \
    0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000 

    #define BES_LOUDNESS_HCF_WS_GAIN_MAX  0x399A
           
    #define BES_LOUDNESS_HCF_WS_GAIN_MIN  0x2666
           
    #define BES_LOUDNESS_HCF_FILTER_FIRST  0
           
    #define BES_LOUDNESS_HCF_GAIN_MAP_IN \
    -45, -35, -19, -18,  0
   
    #define BES_LOUDNESS_HCF_GAIN_MAP_OUT \            
    0, 12, 12, 12, 0

	#define BES_LOUDNESS_HCF_ATT_TIME	164
	#define BES_LOUDNESS_HCF_REL_TIME	16400
#else
/* Compensation Filter HSF coeffs: default all pass filter       */
/* BesLoudness also uses this coeffs    */
#define BES_LOUDNESS_HCF_HSF_COEFF \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0

/* Compensation Filter BPF coeffs: default all pass filter      */
#define BES_LOUDNESS_HCF_BPF_COEFF \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    \     
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    \     
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    \     
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0

#define BES_LOUDNESS_HCF_DRC_FORGET_TABLE \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0

#define BES_LOUDNESS_HCF_WS_GAIN_MAX  0

#define BES_LOUDNESS_HCF_WS_GAIN_MIN  0

#define BES_LOUDNESS_HCF_FILTER_FIRST  0

#define BES_LOUDNESS_HCF_GAIN_MAP_IN \
    0, 0, 0, 0, 0

#define BES_LOUDNESS_HCF_GAIN_MAP_OUT \
    0, 0, 0, 0, 0

#endif

#endif
