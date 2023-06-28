#include "./SYSTEM/sys/sys.h"
#include "./SYSTEM/delay/delay.h"
#include "./BSP/EXTI/exti.h"


/**
 * @brief       KEY0 外部中断服务程序
 * @param       无
 * @retval      无
 * 以下文件没写具体的回调函数，需要的可以仿照第三版写
 */
// void KEY0_INT_IRQHandler(void)
// {
//     HAL_GPIO_EXTI_IRQHandler(KEY0_INT_GPIO_PIN);         /* 调用中断处理公用函数 清除KEY0所在中断线 的中断标志位 */
//     __HAL_GPIO_EXTI_CLEAR_IT(KEY0_INT_GPIO_PIN);         /* HAL库默认先清中断再处理回调，退出时再清一次中断，避免按键抖动误触发 */
// }

/**
 * @brief       KEY1 外部中断服务程序
 * @param       无
 * @retval      无
 * 以下函数没有写具体的回调函数，需要的可以仿照第三版写
 */
// void KEY1_INT_IRQHandler(void)
// { 
//     HAL_GPIO_EXTI_IRQHandler(KEY1_INT_GPIO_PIN);         /* 调用中断处理公用函数 清除KEY1所在中断线 的中断标志位，中断下半部在HAL_GPIO_EXTI_Callback执行 */
//     __HAL_GPIO_EXTI_CLEAR_IT(KEY1_INT_GPIO_PIN);         /* HAL库默认先清中断再处理回调，退出时再清一次中断，避免按键抖动误触发 */
// }


/**
 * @brief       PWM 外部中断服务程序
 * @param       无
 * @retval      无
 */
// void PWM_INT_IRQHandler(void)
// { 
//     HAL_GPIO_EXTI_IRQHandler(PWM_INT_GPIO_PIN);        /* 这里所有的PWM都要改成对应的名称  调用中断处理公用函数 清除KEY_UP所在中断线 的中断标志位，中断下半部在HAL_GPIO_EXTI_Callback执行 */
//     __HAL_GPIO_EXTI_CLEAR_IT(PWM_INT_GPIO_PIN);        /* HAL库默认先清中断再处理回调，退出时再清一次中断，避免按键抖动误触发 */
// }

/**
 * @brief       中断服务程序中需要做的事情
                在HAL库中所有的外部中断服务函数都会调用此函数
 * @param       GPIO_Pin:中断引脚号
 * @retval      无
 */
// void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
// { 
//     //   /*这里写你想要写中断执行的函数*/
//     // delay_ms(20);      /* 消抖 */
//     // switch(GPIO_Pin)
//     // {
//     //     case KEY0_INT_GPIO_PIN:
//     //         if (KEY0 == 0)
//     //         {
//     //             LED0_TOGGLE();  /* LED0 状态取反 */ 
//     //             LED1_TOGGLE();  /* LED1 状态取反 */ 
//     //         }
//     //         break;
//     //     case KEY1_INT_GPIO_PIN:
//     //         if (KEY1 == 0)
//     //         {
//     //             LED0_TOGGLE();  /* LED0 状态取反 */ 
//     //         }
//     //         break;
//     //     case WKUP_INT_GPIO_PIN:
//     //         if (WK_UP == 1)
//     //         {
//     //             BEEP_TOGGLE();  /* 蜂鸣器状态取反 */ 
//     //         }
//     //         break;      
//     // }
// }

/**
 * @brief       外部中断初始化程序
 * @param       无
 * @retval      无
 */
// void extix_init(void)
// {
//     // GPIO_InitTypeDef gpio_init_struct;

//     // PWM_GPIO_CLK_ENABLE();                                  /* PWM时钟使能 */
//     // PWM_GPIO_CLK_ENABLE();                                  /* PWM时钟使能 */
//     // PWM_GPIO_CLK_ENABLE();                                  /* PWM时钟使能 */

//     // gpio_init_struct.Pin = PWM_INT_GPIO_PIN;
//     // gpio_init_struct.Mode = GPIO_MODE_IT_FALLING;            /* 需更改 下升沿触发 */
//     // gpio_init_struct.Pull = GPIO_PULLUP;
//     // HAL_GPIO_Init(PWM_INT_GPIO_PORT, &gpio_init_struct);    /* 需更改  PWM配置为下降沿触发中断 */

//     // gpio_init_struct.Pin = PWM_INT_GPIO_PIN;
//     // gpio_init_struct.Mode = GPIO_MODE_IT_FALLING;            /*需更改 下升沿触发 */
//     // gpio_init_struct.Pull = GPIO_PULLUP;
//     // HAL_GPIO_Init(PWM_INT_GPIO_PORT, &gpio_init_struct);    /* 需更改  PWM配置为下降沿触发中断 */
    
//     // gpio_init_struct.Pin = PWM_INT_GPIO_PIN;
//     // gpio_init_struct.Mode = GPIO_MODE_IT_RISING;             /*PWM需更改  上升沿触发 */
//     // gpio_init_struct.Pull = GPIO_PULLDOWN;
//     // HAL_GPIO_Init(PWM_GPIO_PORT, &gpio_init_struct);        /* PWM需更改 配置为下降沿触发中断 */

//     // HAL_NVIC_SetPriority(PWM_INT_IRQn, 0, 2);               /* 抢占0，子优先级2 */
//     // HAL_NVIC_EnableIRQ(PWM_INT_IRQn);                       /* 使能中断线4 */

//     // HAL_NVIC_SetPriority(PWM_INT_IRQn, 1, 2);               /* 抢占1，子优先级2 */
//     // HAL_NVIC_EnableIRQ(PWM_INT_IRQn);                       /* 使能中断线3 */

//     // HAL_NVIC_SetPriority(PWM_INT_IRQn, 2, 2);               /* 抢占2，子优先级2 */
//     // HAL_NVIC_EnableIRQ(PWM_INT_IRQn);                       /* 使能中断线0 */
// }