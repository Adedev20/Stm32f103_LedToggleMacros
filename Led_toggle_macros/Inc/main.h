/*
 * main.h
 *
 *  Created on: Mar 20, 2023
 *  Author: RadiusNT
 */

#ifndef MAIN_H_
#define MAIN_H_
#include <stdint.h>


//some macros
#define  ADDR_REG_APB2ENR  ((RCC_APB2ENR_t*) 0x40021018)
#define  ADDR_GPIOC_MODE   ((GPIOx_CRH_t*)   0x40011004)
#define  ADDR_GPIOC_OD     ((GPIOx_ODR_t*)   0x4001100C)
#define  ADDR_GPIOA_MODE   ((GPIOx_CRL_t*)   0x40010800)
#define  ADDR_GPIOA_OD     ((GPIOx_ODR_t*)   0x4001080C)


#define  CLOCK_ENABLE     1
#define  MODE_CONF_OUTPUT 1
#define  PIN_STATE_HIGH   1
#define  DELAY_COUNT      200000UL
#define  PIN_STATE_LOW    0


typedef struct
{

	uint32_t afio_en      :1;
	uint32_t reserved     :1;
	uint32_t gpioa_en     :1;
	uint32_t gpiob_en     :1;
	uint32_t gpioc_en     :1;
	uint32_t gpiod_en     :1;
	uint32_t gpioe_en     :1;
	uint32_t reserved2    :2;
	uint32_t adc1_en      :1;
	uint32_t adc2_en      :1;
	uint32_t tim1_en      :1;
	uint32_t spi1_en      :1;
	uint32_t reserved3    :1;
	uint32_t usart1_en    :1;
	uint32_t reserved4    :1;
	uint32_t reserved5    :16;

}RCC_APB2ENR_t;

typedef struct
{
	uint32_t pin8  :4;
	uint32_t pin9  :4;
	uint32_t pin10 :4;
	uint32_t pin11 :4;
	uint32_t pin12 :4;
	uint32_t pin13 :4;
	uint32_t pin14 :4;
	uint32_t pin15 :4;




}GPIOx_CRH_t;

typedef struct
{
	uint32_t pin0  :4;
	uint32_t pin1  :4;
	uint32_t pin2  :4;
	uint32_t pin3  :4;
	uint32_t pin4  :4;
	uint32_t pin5  :4;
	uint32_t pin6  :4;
	uint32_t pin7  :4;

}GPIOx_CRL_t;



typedef struct
{

	uint32_t pin0     :1;
	uint32_t pin1     :1;
	uint32_t pin2     :1;
	uint32_t pin3     :1;
	uint32_t pin4     :1;
	uint32_t pin5     :1;
	uint32_t pin6     :1;
	uint32_t pin7     :1;
	uint32_t pin8     :1;
	uint32_t pin9     :1;
	uint32_t pin10     :1;
	uint32_t pin11     :1;
	uint32_t pin12     :1;
	uint32_t pin13     :1;
	uint32_t pin14     :1;
	uint32_t pin15     :1;
	uint32_t reserved :16;


}GPIOx_ODR_t;


#endif /* MAIN_H_ */
