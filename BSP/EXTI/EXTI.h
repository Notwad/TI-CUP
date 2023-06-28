#ifndef __EXTI_H
#define __EXTI_H

#include "./SYSTEM/sys/sys.h"

/******************************************************************************************/
/* 引脚 和 中断编号 & 中断服务函数 定义 */ 

// #define pwm_INT_GPIO_PORT              GPIOA
// #define PWM_INT_GPIO_PIN               GPIO_PIN_x                                    /*把x改成需要的引脚号*/
// #define PWM_INT_GPIO_CLK_ENABLE()      do{ __HAL_RCC_GPIOE_CLK_ENABLE(); }while(0)   /* PA口时钟使能 */
// #define PWM_INT_IRQn                   EXTI4_IRQn
// #define KPWM_INT_IRQHandler             EXTI4_IRQHandler

// #define PWM_INT_GPIO_PORT              GPIOB
// #define PWM_INT_GPIO_PIN               GPIO_PIN_x
// #define PWM_INT_GPIO_CLK_ENABLE()      do{ __HAL_RCC_GPIOE_CLK_ENABLE(); }while(0)   /* PB口时钟使能 */
// #define PWM_INT_IRQn                   EXTI3_IRQn
// #define PWM_INT_IRQHandler             EXTI3_IRQHandler

// #define PWM_INT_GPIO_PORT              GPIOC
// #define PWM_INT_GPIO_PIN               GPIO_PIN_x
// #define PWM_INT_GPIO_CLK_ENABLE()      do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PC口时钟使能 */
// #define PWM_INT_IRQn                   EXTI0_IRQn
// #define PWM_INT_IRQHandler             EXTI0_IRQHandler

// #define PWM_INT_GPIO_PORT              GPIOD
// #define PWM_INT_GPIO_PIN               GPIO_PIN_x
// #define PWM_INT_GPIO_CLK_ENABLE()      do{ __HAL_RCC_GPIOE_CLK_ENABLE(); }while(0)   /* PD口时钟使能 */
// #define PWM_INT_IRQn                   EXTI4_IRQn
// #define PWM_INT_IRQHandler             EXTI4_IRQHandler

// #define PWM_INT_GPIO_PORT              GPIOE
// #define PWM_INT_GPIO_PIN               GPIO_PIN_x
// #define PWM_INT_GPIO_CLK_ENABLE()      do{ __HAL_RCC_GPIOE_CLK_ENABLE(); }while(0)   /* PE口时钟使能 */
// #define PWM_INT_IRQn                   EXTI3_IRQn
// #define PWM_INT_IRQHandler             EXTI3_IRQHandler

// #define PWM_INT_GPIO_PORT              GPIOF
// #define PWM_INT_GPIO_PIN               GPIO_PIN_x
// #define PWM_INT_GPIO_CLK_ENABLE()      do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PF口时钟使能 */
// #define PWM_INT_IRQn                   EXTI0_IRQn
// #define PWM_INT_IRQHandler             EXTI0_IRQHandler

// #define PWM_INT_GPIO_PORT              GPIOG
// #define PWM_INT_GPIO_PIN               GPIO_PIN_x
// #define PWM_INT_GPIO_CLK_ENABLE()      do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PF口时钟使能 */
// #define PWM_INT_IRQn                   EXTI0_IRQn
// #define PWM_INT_IRQHandler             EXTI0_IRQHandler

/******************************************************************************************/


void extix_init(void);  /* 外部中断初始化 */


#endif


