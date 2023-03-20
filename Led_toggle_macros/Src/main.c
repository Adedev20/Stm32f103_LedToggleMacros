/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Emmanuel Adedayo Oyedokun
 * @brief          : Led blinking with macros
 * @date 		   : 20/03/2023
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "main.h"

  /*uint32_t *pClkcontReg   = (uint32_t*) 0x40021018;
	uint32_t *pPortCModeReg = (uint32_t*) 0x40011004;
	uint32_t *pPinReg       = (uint32_t*) 0x4001100C;*/

int main (void) {

	RCC_APB2ENR_t volatile *const pClkcontReg   = ADDR_REG_APB2ENR;
	GPIOx_CRH_t   volatile *const pPortCModeReg = ADDR_GPIOC_MODE;
	GPIOx_ODR_t   volatile *const pPinRegC      = ADDR_GPIOC_OD;
	GPIOx_CRL_t   volatile *const pPortAModeReg = ADDR_GPIOA_MODE;
	GPIOx_ODR_t   volatile *const pPinRegA      = ADDR_GPIOA_OD;


	pClkcontReg->gpioa_en = CLOCK_ENABLE;
	pClkcontReg->gpioc_en = CLOCK_ENABLE;


	pPortAModeReg->pin3   = MODE_CONF_OUTPUT;
	pPortCModeReg->pin13  = MODE_CONF_OUTPUT;


	while(1)
	{
	pPinRegC->pin13 = PIN_STATE_HIGH;
	pPinRegA->pin3  = PIN_STATE_HIGH;
	for (int i = 0; i< DELAY_COUNT; i++);

	pPinRegA->pin3  = PIN_STATE_LOW;
	pPinRegC->pin13 = PIN_STATE_LOW;
	for (int i = 0; i< DELAY_COUNT; i++);
	}

}
