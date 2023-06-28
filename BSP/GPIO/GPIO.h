#ifndef __GPIO_H
#define __GPIO_H

#include "../SYSTEM/sys/sys.h"



void gpio_init(void);                                                                    /*IO口初始化，必备*/

/******************************************************************************************/
/* 引脚 定义 */


// #define PWM_GPIO_PORT                  GPIOA                                         /* 需要换IO口的名字就将IO口的PWM换成对应的名字 */
// #define PWM_GPIO_PIN                   GPIO_PIN_x                                    /*当需要使用任意IO口时将x换成对应的数字即可*/
// #define PWM_GPIO_CLK_ENABLE()          do{ __HAL_RCC_GPIOF_CLK_ENABLE(); }while(0)   /* PA口时钟使能 */

// #define ECHO_GPIO_PORT                  GPIOB
// #define PWM_GPIO_PIN                    GPIO_PIN_x
// #define PWM_GPIO_CLK_ENABLE()           do{ __HAL_RCC_GPIOF_CLK_ENABLE(); }while(0)   /* PB口时钟使能 */

// #define PWM_GPIO_PORT                   GPIOC
// #define PWM_GPIO_PIN                    GPIO_PIN_x
// #define PWM_GPIO_CLK_ENABLE()           do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PC口时钟使能 */

// #define PWM_GPIO_PORT                   GPIOD
// #define PWM_GPIO_PIN                    GPIO_PIN_x
// #define PWM_GPIO_CLK_ENABLE()           do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PD口时钟使能 */

// #define PWM_GPIO_PORT                   GPIOE
// #define PWM_GPIO_PIN                    GPIO_PIN_x
// #define PWM_GPIO_CLK_ENABLE()           do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PE口时钟使能 */

// #define PWM_GPIO_PORT                   GPIOF
// #define PWM_GPIO_PIN                    GPIO_PIN_x
// #define PWM_GPIO_CLK_ENABLE()           do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PF口时钟使能 */

// #define PWM_GPIO_PORT                   GPIOG
// #define PWM_GPIO_PIN                    GPIO_PIN_x
// #define PWM_GPIO_CLK_ENABLE()           do{ __HAL_RCC_GPIOA_CLK_ENABLE(); }while(0)   /* PG口时钟使能 */



/******************************************************************************************/







#endif


