/* arch/arm/mach-exynos/include/mach/regs-clock-exynos5422.h
 *
 * Copyright (c) 2013 Samsung Electronics Co., Ltd.
 *						  http://www.samsung.com
 *
 * EXYNOS5422 - Clock register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_REGS_CLOCK_5422_H
#define __ASM_ARCH_REGS_CLOCK_5422_H __FILE__

#include <plat/cpu.h>
#include <mach/map.h>

#define EXYNOS_CLKREG(x)		(S5P_VA_CMU + (x))		/* PA : 0x10030000 */

#define EXYNOS5_APLL_CON1				EXYNOS_CLKREG(0x00104)
#define EXYNOS5_CLK_SRC_CPU				EXYNOS_CLKREG(0x00200)
#define EXYNOS5_CLK_MUX_STAT_CPU		EXYNOS_CLKREG(0x00400)
#define EXYNOS5_CLK_DIV_CPU0			EXYNOS_CLKREG(0x00500)
#define EXYNOS5_CLK_DIV_CPU1			EXYNOS_CLKREG(0x00504)
#define EXYNOS5_CLK_DIV_STAT_CPU0		EXYNOS_CLKREG(0x00600)
#define EXYNOS5_CLK_DIV_STAT_CPU1		EXYNOS_CLKREG(0x00604)
#define EXYNOS5_CLK_GATE_BUS_CPU		EXYNOS_CLKREG(0x00700)
#define EXYNOS5_CLK_GATE_SCLK_CPU		EXYNOS_CLKREG(0x00800)
#define EXYNOS5_ARM_EMA_CTRL			EXYNOS_CLKREG(0x01008)

#define EXYNOS5422_PWR_CTRL			EXYNOS_CLKREG(0x01020)
#define EXYNOS5422_PWR_CTRL2			EXYNOS_CLKREG(0x01024)
#define EXYNOS5422_CMU_CPU_SPARE0		EXYNOS_CLKREG(0x02000)
#define EXYNOS5422_CMU_CPU_SPARE1		EXYNOS_CLKREG(0x02004)
#define EXYNOS5422_CMU_CPU_SPARE2		EXYNOS_CLKREG(0x02008)
#define EXYNOS5422_CMU_CPU_SPARE3		EXYNOS_CLKREG(0x0200C)
#define EXYNOS5422_CMU_CPU_SPARE4		EXYNOS_CLKREG(0x02010)

#define EXYNOS5422_PWR_CTRL_KFC			EXYNOS_CLKREG(0x29020)
#define EXYNOS5422_PWR_CTRL2_KFC		EXYNOS_CLKREG(0x29024)
#define EXYNOS5422_KFC_EMA_CTRL			EXYNOS_CLKREG(0x09008)
#define EXYNOS5422_KFC_EMA_STATUS		EXYNOS_CLKREG(0x0900C)

#define EXYNOS5_CLK_SRC_MASK_CPERI		EXYNOS_CLKREG(0x04300)

#define EXYNOS5_CLK_DIV_G2D				EXYNOS_CLKREG(0x08500)
#define EXYNOS5_CLK_GATE_IP_G2D			EXYNOS_CLKREG(0x08800)
#define EXYNOS5_CLK_GATE_IP_ACP			EXYNOS_CLKREG(0x08800)
#define EXYNOS5_CLK_GATE_BUS_SYSLFT		EXYNOS_CLKREG(0x08920)
#define EXYNOS5_CLK_GATE_IP_ISP0			EXYNOS_CLKREG(0x0C800)
#define EXYNOS5_CLK_GATE_IP_ISP1			EXYNOS_CLKREG(0x0C804)
#define EXYNOS5_CLK_GATE_SCLK_ISP		EXYNOS_CLKREG(0x0C900)
#define EXYNOS5_CLK_DIV_ISP0			EXYNOS_CLKREG(0x0C300)
#define EXYNOS5_CLK_DIV_ISP1			EXYNOS_CLKREG(0x0C304)
#define EXYNOS5_CLK_DIV_ISP2			EXYNOS_CLKREG(0x0C308)

#define EXYNOS5_CPLL_LOCK				EXYNOS_CLKREG(0x10020)
#define EXYNOS5_DPLL_LOCK				EXYNOS_CLKREG(0x10030)
#define EXYNOS5_RPLL_LOCK				EXYNOS_CLKREG(0x10050)
#define EXYNOS5_IPLL_LOCK				EXYNOS_CLKREG(0x10060)
#define EXYNOS5_SPLL_LOCK				EXYNOS_CLKREG(0x10070)
#define EXYNOS5_VPLL_LOCK				EXYNOS_CLKREG(0x10080)
#define EXYNOS5_MPLL_LOCK				EXYNOS_CLKREG(0x10090)

#define EXYNOS5_CPLL_CON0				EXYNOS_CLKREG(0x10120)
#define EXYNOS5_CPLL_CON1				EXYNOS_CLKREG(0x10124)
#define EXYNOS5_DPLL_CON0				EXYNOS_CLKREG(0x10128)
#define EXYNOS5_DPLL_CON1				EXYNOS_CLKREG(0x1012C)

#define EXYNOS5_EPLL_CON0				EXYNOS_CLKREG(0x10130)
#define EXYNOS5_EPLL_CON1				EXYNOS_CLKREG(0x10134)
#define EXYNOS5_EPLL_CON2				EXYNOS_CLKREG(0x10138)

#define EXYNOS5_RPLL_CON0				EXYNOS_CLKREG(0x10140)
#define EXYNOS5_RPLL_CON1				EXYNOS_CLKREG(0x10144)
#define EXYNOS5_RPLL_CON2				EXYNOS_CLKREG(0x10148)

#define EXYNOS5_IPLL_CON0				EXYNOS_CLKREG(0x10150)
#define EXYNOS5_IPLL_CON1				EXYNOS_CLKREG(0x10154)
#define EXYNOS5_SPLL_CON0				EXYNOS_CLKREG(0x10160)
#define EXYNOS5_SPLL_CON1				EXYNOS_CLKREG(0x10164)

#define EXYNOS5_MPLL_CON1				EXYNOS_CLKREG(0x10184)

#define EXYNOS5_CLK_SRC_TOP0			EXYNOS_CLKREG(0x10200)
#define EXYNOS5_CLK_SRC_TOP1			EXYNOS_CLKREG(0x10204)
#define EXYNOS5_CLK_SRC_TOP2			EXYNOS_CLKREG(0x10208)
#define EXYNOS5_CLK_SRC_TOP3			EXYNOS_CLKREG(0x1020C)
#define EXYNOS5_CLK_SRC_TOP4			EXYNOS_CLKREG(0x10210)
#define EXYNOS5_CLK_SRC_TOP5			EXYNOS_CLKREG(0x10214)
#define EXYNOS5_CLK_SRC_TOP6			EXYNOS_CLKREG(0x10218)
#define EXYNOS5_CLK_SRC_TOP7			EXYNOS_CLKREG(0x1021C)
#define EXYNOS5_CLK_SRC_TOP8			EXYNOS_CLKREG(0x10220)
#define EXYNOS5_CLK_SRC_TOP9			EXYNOS_CLKREG(0x10224)
#define EXYNOS5_CLK_SRC_TOP10			EXYNOS_CLKREG(0x10280)
#define EXYNOS5_CLK_SRC_TOP11			EXYNOS_CLKREG(0x10284)
#define EXYNOS5_CLK_SRC_TOP12			EXYNOS_CLKREG(0x10288)
#define EXYNOS5_CLK_SRC_TOP13			EXYNOS_CLKREG(0x1028c)

#define EXYNOS5_CLK_SRC_DISP00			EXYNOS_CLKREG(0x10224)
#define EXYNOS5_CLK_SRC_DISP01			EXYNOS_CLKREG(0x10228)
#define EXYNOS5_CLK_SRC_DISP10			EXYNOS_CLKREG(0x1022C)
#define EXYNOS5_CLK_SRC_DISP11			EXYNOS_CLKREG(0x10230)
#define EXYNOS5_CLK_SRC_MAUDIO			EXYNOS_CLKREG(0x10240)
#define EXYNOS5_CLK_SRC_FSYS			EXYNOS_CLKREG(0x10244)
#define EXYNOS5_CLK_SRC_GEN				EXYNOS_CLKREG(0x10248)
#define EXYNOS5_CLK_SRC_PERIC0			EXYNOS_CLKREG(0x10250)
#define EXYNOS5_CLK_SRC_PERIC1			EXYNOS_CLKREG(0x10254)
#define EXYNOS5_CLK_SRC_ISP				EXYNOS_CLKREG(0x10270)
#define EXYNOS5_CLK_SRC_CAM				EXYNOS_CLKREG(0x10274)

#define EXYNOS5_CLK_SRC_MASK_TOP0		EXYNOS_CLKREG(0x10300)
#define EXYNOS5_CLK_SRC_MASK_TOP1		EXYNOS_CLKREG(0x10304)
#define EXYNOS5_CLK_SRC_MASK_TOP2		EXYNOS_CLKREG(0x10308)
#define EXYNOS5_CLK_SRC_MASK_TOP7		EXYNOS_CLKREG(0x1031C)
#define EXYNOS5_CLK_SRC_MASK_TOP8		EXYNOS_CLKREG(0x10320)
#define EXYNOS5_CLK_SRC_MASK_TOP		EXYNOS_CLKREG(0x10310)
#define EXYNOS5_CLK_SRC_MASK_GSCL		EXYNOS_CLKREG(0x10320)
#define EXYNOS5_CLK_SRC_MASK_DISP00		EXYNOS_CLKREG(0x10324)
#define EXYNOS5_CLK_SRC_MASK_DISP01		EXYNOS_CLKREG(0x10328)
#define EXYNOS5_CLK_SRC_MASK_DISP10		EXYNOS_CLKREG(0x1032C)
#define EXYNOS5_CLK_SRC_MASK_DISP11		EXYNOS_CLKREG(0x10330)
#define EXYNOS5_CLK_SRC_MASK_MAUDIO		EXYNOS_CLKREG(0x10334)
#define EXYNOS5_CLK_SRC_MASK_FSYS		EXYNOS_CLKREG(0x10340)
#define EXYNOS5_CLK_SRC_MASK_GEN		EXYNOS_CLKREG(0x10344)
#define EXYNOS5_CLK_SRC_MASK_PERIC0		EXYNOS_CLKREG(0x10350)
#define EXYNOS5_CLK_SRC_MASK_PERIC1		EXYNOS_CLKREG(0x10354)
#define EXYNOS5_CLK_SRC_MASK_ISP		EXYNOS_CLKREG(0x10370)
#define EXYNOS5_CLK_SRC_MASK_CAM		EXYNOS_CLKREG(0x10374)

#define EXYNOS5_CLK_MUX_STAT_TOP0		EXYNOS_CLKREG(0x10400)
#define EXYNOS5_CLK_MUX_STAT_TOP1		EXYNOS_CLKREG(0x10404)
#define EXYNOS5_CLK_MUX_STAT_TOP2		EXYNOS_CLKREG(0x10408)
#define EXYNOS5_CLK_MUX_STAT_TOP3		EXYNOS_CLKREG(0x1040c)
#define EXYNOS5_CLK_MUX_STAT_TOP4		EXYNOS_CLKREG(0x10410)
#define EXYNOS5_CLK_MUX_STAT_TOP5		EXYNOS_CLKREG(0x10414)
#define EXYNOS5_CLK_MUX_STAT_TOP6		EXYNOS_CLKREG(0x10418)
#define EXYNOS5_CLK_MUX_STAT_TOP7		EXYNOS_CLKREG(0x1041c)
#define EXYNOS5_CLK_MUX_STAT_TOP8		EXYNOS_CLKREG(0x10420)
#define EXYNOS5_CLK_MUX_STAT_TOP9		EXYNOS_CLKREG(0x10424)
#define EXYNOS5_CLK_MUX_STAT_TOP10		EXYNOS_CLKREG(0x10480)
#define EXYNOS5_CLK_MUX_STAT_TOP11		EXYNOS_CLKREG(0x10484)
#define EXYNOS5_CLK_MUX_STAT_TOP12		EXYNOS_CLKREG(0x10488)
#define EXYNOS5_CLK_MUX_STAT_TOP13		EXYNOS_CLKREG(0x1048c)

#define EXYNOS5_CLK_DIV_TOP0			EXYNOS_CLKREG(0x10500)
#define EXYNOS5_CLK_DIV_TOP1			EXYNOS_CLKREG(0x10504)
#define EXYNOS5_CLK_DIV_TOP2			EXYNOS_CLKREG(0x10508)
#define EXYNOS5_CLK_DIV_TOP3			EXYNOS_CLKREG(0x1051C)
#define EXYNOS5_CLK_DIV_TOP8			EXYNOS_CLKREG(0x10520)
#define EXYNOS5_CLK_DIV_TOP9			EXYNOS_CLKREG(0x10524)

#define EXYNOS5_CLK_DIV_DISP10			EXYNOS_CLKREG(0x1052C)
#define EXYNOS5_CLK_DIV_GEN				EXYNOS_CLKREG(0x1053C)
#define EXYNOS5_CLK_DIV_MAUDIO			EXYNOS_CLKREG(0x10544)
#define EXYNOS5_CLK_DIV_FSYS0			EXYNOS_CLKREG(0x10548)
#define EXYNOS5_CLK_DIV_FSYS1			EXYNOS_CLKREG(0x1054C)
#define EXYNOS5_CLK_DIV_FSYS2			EXYNOS_CLKREG(0x10550)
#define EXYNOS5_CLK_DIV_FSYS3			EXYNOS_CLKREG(0x10554)
#define EXYNOS5_CLK_DIV_PERIC0			EXYNOS_CLKREG(0x10558)
#define EXYNOS5_CLK_DIV_PERIC1			EXYNOS_CLKREG(0x1055C)
#define EXYNOS5_CLK_DIV_PERIC2			EXYNOS_CLKREG(0x10560)
#define EXYNOS5_CLK_DIV_PERIC3			EXYNOS_CLKREG(0x10564)
#define EXYNOS5_CLK_DIV_PERIC4			EXYNOS_CLKREG(0x10568)
#define EXYNOS5_CLK_DIV_PERIC5			EXYNOS_CLKREG(0x1056C)

#define EXYNOS5_CLK_DIV_CAM				EXYNOS_CLKREG(0x10574)

#define EXYNOS5_SCLK_DIV_ISP0			EXYNOS_CLKREG(0x10580)
#define EXYNOS5_SCLK_DIV_ISP1			EXYNOS_CLKREG(0x10584)
#define EXYNOS5_CLK_DIV2_RATIO0			EXYNOS_CLKREG(0x10590)
#define EXYNOS5_CLK_DIV2_RATIO1			EXYNOS_CLKREG(0x10594)
#define EXYNOS5_CLK_DIV4_RATIO			EXYNOS_CLKREG(0x105A0)
#define EXYNOS5_CLK_DIV_STAT_TOP0		EXYNOS_CLKREG(0x10600)
#define EXYNOS5_CLK_DIV_STAT_TOP1		EXYNOS_CLKREG(0x10604)
#define EXYNOS5_CLK_DIV_STAT_TOP2		EXYNOS_CLKREG(0x10608)
#define EXYNOS5_CLK_DIV_STAT_TOP8		EXYNOS_CLKREG(0x10620)
#define EXYNOS5_CLK_DIV_STAT_TOP9		EXYNOS_CLKREG(0x10624)
#define EXYNOS5_CLK_DIV_STAT_DISP10		EXYNOS_CLKREG(0x1062c)

#define EXYNOS5_CLK_DIV_STAT_MAU		EXYNOS_CLKREG(0x10644)
#define EXYNOS5_CLK_DIV_STAT_FSYS0		EXYNOS_CLKREG(0x10648)
#define EXYNOS5_CLK_DIV_STAT_FSYS1		EXYNOS_CLKREG(0x1064c)
#define EXYNOS5_CLK_DIV_STAT_FSYS2		EXYNOS_CLKREG(0x10650)
#define EXYNOS5_CLK_DIV_STAT_PERIC0		EXYNOS_CLKREG(0x10658)
#define EXYNOS5_CLK_DIV_STAT_PERIC1		EXYNOS_CLKREG(0x1065c)
#define EXYNOS5_CLK_DIV_STAT_PERIC2		EXYNOS_CLKREG(0x10660)
#define EXYNOS5_CLK_DIV_STAT_PERIC3		EXYNOS_CLKREG(0x10664)
#define EXYNOS5_CLK_DIV_STAT_PERIC4		EXYNOS_CLKREG(0x10668)

#define EXYNOS5_CLK_DIV_STAT_CAM		EXYNOS_CLKREG(0x10674)
#define EXYNOS5_SCLK_DIV_STAT_ISP0		EXYNOS_CLKREG(0x10680)
#define EXYNOS5_SCLK_DIV_STAT_ISP1		EXYNOS_CLKREG(0x10684)

#define EXYNOS5_CLK_DIV2_STAT0			EXYNOS_CLKREG(0x10690)
#define EXYNOS5_CLK_DIV4_STAT			EXYNOS_CLKREG(0x106a0)

#define EXYNOS5_CLK_GATE_BUS_TOP		EXYNOS_CLKREG(0x10700)
#define EXYNOS5_CLK_GATE_BUS_GSCL0		EXYNOS_CLKREG(0x10710)
#define EXYNOS5_CLK_GATE_BUS_GSCL1		EXYNOS_CLKREG(0x10720)
#define EXYNOS5_CLK_GATE_BUS_DISP0		EXYNOS_CLKREG(0x10724)
#define EXYNOS5_CLK_GATE_BUS_DISP1		EXYNOS_CLKREG(0x10728)
#define EXYNOS5_CLK_GATE_BUS_WCORE		EXYNOS_CLKREG(0x10728)
#define EXYNOS5_CLK_GATE_BUS_MFC		EXYNOS_CLKREG(0x10734)
#define EXYNOS5_CLK_GATE_BUS_G3D		EXYNOS_CLKREG(0x10738)
#define EXYNOS5_CLK_GATE_BUS_GEN		EXYNOS_CLKREG(0x1073C)
#define EXYNOS5_CLK_GATE_BUS_FSYS0		EXYNOS_CLKREG(0x10740)
#define EXYNOS5_CLK_GATE_BUS_FSYS1		EXYNOS_CLKREG(0x10744)
#define EXYNOS5_CLK_GATE_BUS_FSYS2		EXYNOS_CLKREG(0x10748)
#define EXYNOS5_CLK_GATE_BUS_PERIC		EXYNOS_CLKREG(0x10750)
#define EXYNOS5_CLK_GATE_BUS_PERIC1		EXYNOS_CLKREG(0x10754)
#define EXYNOS5_CLK_GATE_BUS_PERIS0		EXYNOS_CLKREG(0x10760)
#define EXYNOS5_CLK_GATE_BUS_PERIS1		EXYNOS_CLKREG(0x10764)

#define EXYNOS5_CLK_GATE_TOP_SCLK_GSCL		EXYNOS_CLKREG(0x10820)
#define EXYNOS5_CLK_GATE_TOP_SCLK_DISP0		EXYNOS_CLKREG(0x10824)
#define EXYNOS5_CLK_GATE_TOP_SCLK_DISP1		EXYNOS_CLKREG(0x10828)
#define EXYNOS5_CLK_GATE_TOP_SCLK_GEN		EXYNOS_CLKREG(0x1082C)
#define EXYNOS5_CLK_GATE_TOP_SCLK_MAU		EXYNOS_CLKREG(0x1083C)
#define EXYNOS5_CLK_GATE_TOP_SCLK_FSYS		EXYNOS_CLKREG(0x10840)
#define EXYNOS5_CLK_GATE_TOP_SCLK_PERIC		EXYNOS_CLKREG(0x10850)
#define EXYNOS5_CLK_GATE_TOP_SCLK_ISP		EXYNOS_CLKREG(0x10870)

#define EXYNOS5_CLK_GATE_IP_GSCL0		EXYNOS_CLKREG(0x10910)
#define EXYNOS5_CLK_GATE_IP_GSCL1		EXYNOS_CLKREG(0x10920)
#define EXYNOS5_CLK_GATE_IP_CAM			EXYNOS_CLKREG(0x10924)
#define EXYNOS5_CLK_GATE_IP_DISP1		EXYNOS_CLKREG(0x10928)
#define EXYNOS5_CLK_GATE_IP_MFC			EXYNOS_CLKREG(0x1092C)
#define EXYNOS5_CLK_GATE_IP_G3D			EXYNOS_CLKREG(0x10930)
#define EXYNOS5_CLK_GATE_IP_GEN			EXYNOS_CLKREG(0x10934)
#define EXYNOS5_CLK_GATE_IP_FSYS		EXYNOS_CLKREG(0x10944)
#define EXYNOS5_CLK_GATE_IP_PERIC		EXYNOS_CLKREG(0x10950)
#define EXYNOS5_CLK_GATE_IP_PERIS		EXYNOS_CLKREG(0x10960)
#define EXYNOS5_CLK_GATE_IP_MSCL		EXYNOS_CLKREG(0x10970)
#define EXYNOS5_CLK_GATE_BLOCK			EXYNOS_CLKREG(0x10980)
#define EXYNOS5_CLK_GATE_BUS_FSYS0		EXYNOS_CLKREG(0x10740)

#define EXYNOS5_CLKOUT_CMU_TOP			EXYNOS_CLKREG(0x10A00)
#define EXYNOS5_CMU_TOP_SPARE2			EXYNOS_CLKREG(0x10B08)

#define EXYNOS5_BPLL_LOCK				EXYNOS_CLKREG(0x20010)
#define EXYNOS5_BPLL_CON0				EXYNOS_CLKREG(0x20110)
#define EXYNOS5_CLK_SRC_CDREX			EXYNOS_CLKREG(0x20200)
#define EXYNOS5_CLK_MUX_STAT_CDREX		EXYNOS_CLKREG(0x20400)
#define EXYNOS5_CLK_DIV_CDREX			EXYNOS_CLKREG(0x20500)
#define EXYNOS5_CLK_DIV_CDREX0			EXYNOS_CLKREG(0x20500)
#define EXYNOS5_CLK_DIV_CDREX1			EXYNOS_CLKREG(0x20504)
#define EXYNOS5_CLK_DIV_CDREX2			EXYNOS_CLKREG(0x20504)
#define EXYNOS5_CLK_DIV_STAT_CDREX		EXYNOS_CLKREG(0x20600)
#define EXYNOS5_CLK_DIV_STAT_CDREX2		EXYNOS_CLKREG(0x20604)

#define EXYNOS5_CLK_GATE_BUS_CDREX		EXYNOS_CLKREG(0x20700)
#define EXYNOS5_CLK_GATE_BUS_CDREX1		EXYNOS_CLKREG(0x20704)

#define EXYNOS5_CLK_GATE_IP_CDREX		EXYNOS_CLKREG(0x20900)

#define EXYNOS5_DMC_PAUSE_CTRL			EXYNOS_CLKREG(0x2091C)
#define EXYNOS5_DMC_PAUSE_ENABLE		(1 << 0)

#define EXYNOS5_LPDDR3PHY_CON3			EXYNOS_CLKREG(0x20A20)
#define EXYNOS5_TIMING_SET_SWI			(1 << 28)

#define EXYNOS5_KPLL_LOCK			EXYNOS_CLKREG(0x28000)
#define EXYNOS5_KPLL_CON0			EXYNOS_CLKREG(0x28100)
#define EXYNOS5_CLK_SRC_KFC			EXYNOS_CLKREG(0x28200)
#define EXYNOS5_CLK_MUX_STAT_KFC		EXYNOS_CLKREG(0x28400)
#define EXYNOS5_CLK_DIV_KFC0			EXYNOS_CLKREG(0x28500)
#define EXYNOS5_CLK_DIV_STAT_KFC0	EXYNOS_CLKREG(0x28600)
#define EXYNOS5_CLK_GATE_BUS_CPU_KFC	EXYNOS_CLKREG(0x28700)
#define EXYNOS5_CLK_GATE_SCLK_CPU_KFC	EXYNOS_CLKREG(0x28800)
#define EXYNOS5_CLKOUT_CMU_KFC		EXYNOS_CLKREG(0x28A00)


#define EXYNOS5_MPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_EPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_PLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_VPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_GPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_BPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_DPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_IPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_CPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_SPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_PLL_ENABLE_SHIFT			(31)
#define EXYNOS5_APLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_KPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_RPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_VPLLCON1_K_MASK			(0xFFFF)
#define EXYNOS5_EPLLCON1_K_MASK			(0xFFFF)
#define EXYNOS5_RPLLCON1_K_MASK			(0xFFFF)

#define EXYNOS5_CLKDIV_TOP0_ACLK300_DISP1_SHIFT	(28)
#define EXYNOS5_CLKDIV_TOP0_ACLK300_DISP1_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK300_DISP1_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK400_SHIFT		(24)
#define EXYNOS5_CLKDIV_TOP0_ACLK400_MASK		(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK400_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK333_SHIFT		(20)
#define EXYNOS5_CLKDIV_TOP0_ACLK333_MASK		(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK333_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK266_SHIFT		(16)
#define EXYNOS5_CLKDIV_TOP0_ACLK266_MASK		(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK266_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK200_SHIFT		(12)
#define EXYNOS5_CLKDIV_TOP0_ACLK200_MASK		(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK200_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK166_SHIFT		(8)
#define EXYNOS5_CLKDIV_TOP0_ACLK166_MASK		(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK166_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK133_SHIFT		(4)
#define EXYNOS5_CLKDIV_TOP0_ACLK133_MASK		(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK133_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK66_SHIFT		(0)
#define EXYNOS5_CLKDIV_TOP0_ACLK66_MASK			(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK66_SHIFT)

#define EXYNOS5_CLKDIV_TOP1_ACLK66_PRE_SHIFT	(24)
#define EXYNOS5_CLKDIV_TOP1_ACLK66_PRE_MASK (0x7 << EXYNOS5_CLKDIV_TOP1_ACLK66_PRE_SHIFT)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_ISP_SHIFT   (20)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_ISP_MASK    (0x7 << EXYNOS5_CLKDIV_TOP1_ACLK400_ISP_SHIFT)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_IOP_SHIFT   (16)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_IOP_MASK    (0x7 << EXYNOS5_CLKDIV_TOP1_ACLK400_IOP_SHIFT)
#define EXYNOS5_CLKDIV_TOP1_ACLK300_GSCL_SHIFT  (12)
#define EXYNOS5_CLKDIV_TOP1_ACLK300_GSCL_MASK   (0x7 << EXYNOS5_CLKDIV_TOP1_ACLK300_GSCL_SHIFT)

#define EXYNOS5_CLKDIV_LEX_ATCLK_LEX_SHIFT  (8)
#define EXYNOS5_CLKDIV_LEX_ATCLK_LEX_MASK   (0x7 << EXYNOS5_CLKDIV_LEX_ATCLK_LEX_SHIFT)
#define EXYNOS5_CLKDIV_LEX_PCLK_LEX_SHIFT   (4)
#define EXYNOS5_CLKDIV_LEX_PCLK_LEX_MASK    (0x7 << EXYNOS5_CLKDIV_LEX_PCLK_LEX_SHIFT)

#define EXYNOS5_CLKDIV_R0X_PCLK_R0X_SHIFT   (4)
#define EXYNOS5_CLKDIV_R0X_PCLK_R0X_MASK    (0x7 << EXYNOS5_CLKDIV_R0X_PCLK_R0X_SHIFT)

#define EXYNOS5_CLKDIV_R1X_PCLK_R1X_SHIFT   (4)
#define EXYNOS5_CLKDIV_R1X_PCLK_R1X_MASK    (0x7 << EXYNOS5_CLKDIV_R1X_PCLK_R1X_SHIFT)

#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX2_SHIFT  (28)
#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX2_MASK   (0x7 << EXYNOS5_CLKDIV_CDREX_MCLK_CDREX2_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_EFCON_SHIFT   (24)
#define EXYNOS5_CLKDIV_CDREX_ACLK_EFCON_MASK    (0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_EFCON_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_MCLK_DPHY_SHIFT    (20)
#define EXYNOS5_CLKDIV_CDREX_MCLK_DPHY_MASK (0x7 << EXYNOS5_CLKDIV_CDREX_MCLK_DPHY_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX_SHIFT   (16)
#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX_MASK    (0x7 << EXYNOS5_CLKDIV_CDREX_MCLK_CDREX_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_C2C200_SHIFT  (12)
#define EXYNOS5_CLKDIV_CDREX_ACLK_C2C200_MASK   (0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_C2C200_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CLK400_SHIFT  (8)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CLK400_MASK   (0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_CLK400_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_PCLK_CDREX_SHIFT   (4)
#define EXYNOS5_CLKDIV_CDREX_PCLK_CDREX_MASK    (0x7 << EXYNOS5_CLKDIV_CDREX_PCLK_CDREX_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CDREX_SHIFT   (0)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CDREX_MASK    (0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_CDREX_SHIFT)

#define EXYNOS5_CLKDIV_CDREX2_MCLK_EFPHY_SHIFT  (0)
#define EXYNOS5_CLKDIV_CDREX2_MCLK_EFPHY_MASK   (0xf << EXYNOS5_CLKDIV_CDREX2_MCLK_EFPHY_SHIFT)

/* CLK_DIV_KFC0 */
#define EXYNOS5_CLKDIV_KFC0_CORE_SHIFT      (0)
#define EXYNOS5_CLKDIV_KFC0_CORE_MASK       (0x7 << EXYNOS5_CLKDIV_KFC0_CORE_SHIFT)
#define EXYNOS5_CLKDIV_KFC0_ACLK_SHIFT      (4)
#define EXYNOS5_CLKDIV_KFC0_ACLK_MASK       (0x7 << EXYNOS5_CLKDIV_KFC0_ACLK_SHIFT)
#define EXYNOS5_CLKDIV_KFC0_HPM_SHIFT       (8)
#define EXYNOS5_CLKDIV_KFC0_HPM_MASK        (0x7 << EXYNOS5_CLKDIV_KFC0_HPM_SHIFT)
#define EXYNOS5_CLKDIV_KFC0_PCLK_SHIFT      (20)
#define EXYNOS5_CLKDIV_KFC0_PCLK_MASK       (0x7 << EXYNOS5_CLKDIV_KFC0_PCLK_SHIFT)
#define EXYNOS5_CLKDIV_KFC0_KPLL_SHIFT      (24)
#define EXYNOS5_CLKDIV_KFC0_KPLL_MASK       (0x7 << EXYNOS5_CLKDIV_KFC0_KPLL_SHIFT)

/* CLK_DIV_CPU0 */
#define EXYNOS5_CLKDIV_CPU0_CORE_SHIFT      (0)
#define EXYNOS5_CLKDIV_CPU0_CORE_MASK       (0x7 << EXYNOS5_CLKDIV_CPU0_CORE_SHIFT)
#define EXYNOS5_CLKDIV_CPU0_CPUD_SHIFT      (4)
#define EXYNOS5_CLKDIV_CPU0_CPUD_MASK       (0x7 << EXYNOS5_CLKDIV_CPU0_CPUD_SHIFT)
#define EXYNOS5_CLKDIV_CPU0_ACP_SHIFT       (8)
#define EXYNOS5_CLKDIV_CPU0_ACP_MASK        (0x7 << EXYNOS5_CLKDIV_CPU0_ACP_SHIFT)
#define EXYNOS5_CLKDIV_CPU0_ATB_SHIFT       (16)
#define EXYNOS5_CLKDIV_CPU0_ATB_MASK        (0x7 << EXYNOS5_CLKDIV_CPU0_ATB_SHIFT)
#define EXYNOS5_CLKDIV_CPU0_PCLKDBG_SHIFT   (20)
#define EXYNOS5_CLKDIV_CPU0_PCLKDBG_MASK    (0x7 << EXYNOS5_CLKDIV_CPU0_PCLKDBG_SHIFT)
#define EXYNOS5_CLKDIV_CPU0_APLL_SHIFT      (24)
#define EXYNOS5_CLKDIV_CPU0_APLL_MASK       (0x7 << EXYNOS5_CLKDIV_CPU0_APLL_SHIFT)
#define EXYNOS5_CLKDIV_CPU0_CORE2_SHIFT     (28)
#define EXYNOS5_CLKDIV_CPU0_CORE2_MASK      (0x7 << EXYNOS5_CLKDIV_CPU0_CORE2_SHIFT)

/* CLK_DIV_CPU1 */
#define EXYNOS5_CLKDIV_CPU1_COPY_SHIFT      (0)
#define EXYNOS5_CLKDIV_CPU1_COPY_MASK       (0x7 << EXYNOS5_CLKDIV_CPU1_COPY_SHIFT)
#define EXYNOS5_CLKDIV_CPU1_HPM_SHIFT       (4)
#define EXYNOS5_CLKDIV_CPU1_HPM_MASK        (0x7 << EXYNOS5_CLKDIV_CPU1_HPM_SHIFT)

#define EXYNOS5_CLKSRC_KFC_MUXCORE_SHIFT    (16)
#define EXYNOS5_CLKMUX_STATKFC_MUXCORE_MASK (0x7 << EXYNOS5_CLKSRC_KFC_MUXCORE_SHIFT)

#define EXYNOS5_CLKSRC_CPU_MUXCORE_SHIFT    (16)
#define EXYNOS5_CLKMUX_STATCPU_MUXCORE_MASK (0x7 << EXYNOS5_CLKSRC_CPU_MUXCORE_SHIFT)

/* Exynos 5410 CLK_DIV_TOP0 */
#define EXYNOS5_CLKDIV_ACLK_400_SHIFT       (24)
#define EXYNOS5_CLKDIV_ACLK_400_MASK        (0x7 << EXYNOS5_CLKDIV_ACLK_400_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_333_SHIFT       (20)
#define EXYNOS5_CLKDIV_ACLK_333_MASK        (0x7 << EXYNOS5_CLKDIV_ACLK_333_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_266_SHIFT       (16)
#define EXYNOS5_CLKDIV_ACLK_266_MASK        (0x7 << EXYNOS5_CLKDIV_ACLK_266_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_200_SHIFT       (12)
#define EXYNOS5_CLKDIV_ACLK_200_MASK        (0x7 << EXYNOS5_CLKDIV_ACLK_200_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_166_SHIFT       (8)
#define EXYNOS5_CLKDIV_ACLK_166_MASK        (0x7 << EXYNOS5_CLKDIV_ACLK_166_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_66_SHIFT        (0)
#define EXYNOS5_CLKDIV_ACLK_66_MASK     (0x7 << EXYNOS5_CLKDIV_ACLK_66_SHIFT)

/* Exynos5410 CLK_DIV_TOP1 */
#define EXYNOS5_CLKDIV_ACLK_MIPI_TXBASE_SHIFT   (28)
#define EXYNOS5_CLKDIV_ACLK_MIPI_TXBASE_MASK    (0x7 << EXYNOS5_CLKDIV_ACLK_MIPI_TXBASE_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_66_PRE_SHIFT    (24)
#define EXYNOS5_CLKDIV_ACLK_66_PRE_MASK     (0x7 << EXYNOS5_CLKDIV_ACLK_66_PRE_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_400_ISP_SHIFT   (20)
#define EXYNOS5_CLKDIV_ACLK_400_ISP_MASK    (0x7 << EXYNOS5_CLKDIV_ACLK_400_ISP_SHIFT)

/* Exynos5410 CLK_DIV TOP2 */
#define EXYNOS5_CLKDIV_ACLK_300_JPEG_SHIFT  (28)
#define EXYNOS5_CLKDIV_ACLK_300_JPEG_MASK   (0x7 << EXYNOS5_CLKDIV_ACLK_300_JPEG_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_333_432_GSCL_SHIFT  (24)
#define EXYNOS5_CLKDIV_ACLK_333_432_GSCL_MASK   (0x7 << EXYNOS5_CLKDIV_ACLK_333_432_GSCL_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_333_432_ISP_SHIFT   (20)
#define EXYNOS5_CLKDIV_ACLK_333_432_ISP_MASK    (0x7 << EXYNOS5_CLKDIV_ACLK_333_432_ISP_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_300_DISP1_SHIFT (16)
#define EXYNOS5_CLKDIV_ACLK_300_DISP1_MASK  (0x7 << EXYNOS5_CLKDIV_ACLK_300_DISP1_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_300_DISP0_SHIFT (12)
#define EXYNOS5_CLKDIV_ACLK_300_DISP0_MASK  (0x7 << EXYNOS5_CLKDIV_ACLK_300_DISP0_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_300_GSCL_SHIFT  (8)
#define EXYNOS5_CLKDIV_ACLK_300_GSCL_MASK   (0x7 << EXYNOS5_CLKDIV_ACLK_300_GSCL_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_266_GSCL_SHIFT  (4)
#define EXYNOS5_CLKDIV_ACLK_266_GSCL_MASK   (0x7 << EXYNOS5_CLKDIV_ACLK_266_GSCL_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_200_GSCL_SHIFT  (0)
#define EXYNOS5_CLKDIV_ACLK_200_GSCL_MASK   (0x7 << EXYNOS5_CLKDIV_ACLK_200_GSCL_SHIFT)

/* Exynos5410/Exynos5420 CLK_DIV CDREX0 */
#define EXYNOS5_CLKSRC_MCLK_CDREX_SEL_SHIFT (4)
#define EXYNOS5_CLKDIV_PCLK_CDREX_SHIFT     (28)
#define EXYNOS5_CLKDIV_PCLK_CDREX_MASK      (0x7 << EXYNOS5_CLKDIV_PCLK_CDREX_SHIFT)
#define EXYNOS5_CLKDIV_SCLK_CDREX_SHIFT     (24)
#define EXYNOS5_CLKDIV_SCLK_CDREX_MASK      (0x7 << EXYNOS5_CLKDIV_SCLK_CDREX_SHIFT)
#define EXYNOS5_CLKDIV_ACLK_CDREX1_SHIFT    (16)
#define EXYNOS5_CLKDIV_ACLK_CDREX1_MASK     (0x7 << EXYNOS5_CLKDIV_ACLK_CDREX1_SHIFT)
#define EXYNOS5_CLKDIV_CCLK_DREX0_SHIFT     (8)
#define EXYNOS5_CLKDIV_CCLK_DREX0_MASK      (0x7 << EXYNOS5_CLKDIV_CCLK_DREX0_SHIFT)
#define EXYNOS5_CLKDIV_CLK2X_PHY0_SHIFT     (3)
#define EXYNOS5_CLKDIV_CLK2X_PHY0_MASK      (0x1F << EXYNOS5_CLKDIV_CLK2X_PHY0_SHIFT)

/* Exynos5410 CLK_DIV CDREX1 */
#define EXYNOS5_CLKDIV_ACLK_C2C_200_SHIFT   (4)
#define EXYNOS5_CLKDIV_ACLK_C2C_200_MASK    (0x7 << EXYNOS5_CLKDIV_ACLK_C2C_200_SHIFT)
#define EXYNOS5_CLKDIV_C2C_CLK_400_SHIFT    (0)
#define EXYNOS5_CLKDIV_C2C_CLK_400_MASK     (0x7 << EXYNOS5_CLKDIV_C2C_CLK_400_SHIFT)

/* Exynos5410 CLK_GATE_IP_GSCL0 */
#define EXYNOS5410_CLKGATE_GSCALER_SHIFT    (14)
#define EXYNOS5410_CLKGATE_GSCALER0_3       (0xF << EXYNOS5410_CLKGATE_GSCALER_SHIFT)

/* Compatibility defines and inclusion */
#define PWR_CTRL1_DIV2_DOWN_EN          (1 << 9)
#define PWR_CTRL1_DIV1_DOWN_EN          (1 << 8)

#define PWR_CTRL1_USE_CORE1_WFE         (1 << 5)
#define PWR_CTRL1_USE_CORE0_WFE         (1 << 4)

#define PWR_CTRL1_USE_CORE1_WFI         (1 << 1)
#define PWR_CTRL1_USE_CORE0_WFI         (1 << 0)

#define PWR_CTRL2_DIV2_UP_EN            (1 << 25)
#define PWR_CTRL2_DIV1_UP_EN            (1 << 24)
#define PWR_CTRL2_DUR_STANDBY2          (16)
#define PWR_CTRL2_DUR_STANDBY2_MASK     (0xff << PWR_CTRL2_DUR_STANDBY2)
#define PWR_CTRL2_DUR_STANDBY1          (8)
#define PWR_CTRL2_DUR_STANDBY1_MASK     (0xff << PWR_CTRL2_DUR_STANDBY1)

#define EXYNOS5410_CLKGATE_GSCALER_SHIFT    (14)
#define EXYNOS5410_CLKGATE_GSCALER0_3       (0xF << EXYNOS5410_CLKGATE_GSCALER_SHIFT)

#include <mach/regs-pmu.h>

#define S5P_EPLL_CON                EXYNOS4_EPLL_CON0

#endif /* __ASM_ARCH_REGS_CLOCK_5422_H */

