#include "../BSP/gpio/gpio.h"


void gpio_init(void)
{
// 在这里添加函数体代码
// ...
//    GPIO_InitTypeDef gpio_init_struct;
//    
//    /*以下为针对有命名情况的IO口，两个示范,一个作为输出，一个作为输入*/
//    PWM_GPIO_CLK_ENABLE();                                   /* 需要改 PWM时钟使能 */
//    PWM_GPIO_CLK_ENABLE();                                    /* 需要改 PWM时钟使能 */

//    gpio_init_struct.Pin = PWM_GPIO_PIN;                     /* 需要改 PWM引脚 输出 */
//    gpio_init_struct.Mode = GPIO_MODE_OUTPUT_PP;               /* 输出模式 */
//    gpio_init_struct.Pull = GPIO_NOPULL;                       /* 不上拉也不下拉 */
//    gpio_init_struct.Speed = GPIO_SPEED_FREQ_HIGH;             /* 高速 */
//    HAL_GPIO_Init(PWM_GPIO_PORT, &gpio_init_struct);         /* 需要改 引脚模式设置,输出 */

//    gpio_init_struct.Pin = PWM_GPIO_PIN;                      /* 需要改 PWM引脚  输入*/
//    gpio_init_struct.Mode = GPIO_MODE_INPUT;                   /* 输入模式 */
//    gpio_init_struct.Pull = GPIO_PULLDOWN;                     /* 下拉输入 */
//    gpio_init_struct.Speed = GPIO_SPEED_FREQ_HIGH;             /* 高速 */
//    HAL_GPIO_Init(PWM_GPIO_PORT, &gpio_init_struct);          /* 需要改 引脚模式设置,下拉输入 */
    
    

            // 下列的函数针对于其他单独不命名设置的IO口配置 
  //  GPIO_InitTypeDef GPIO_InitStruct = {0};
  // /* GPIO Ports Clock Enable */
  // // __HAL_RCC_GPIOx_CLK_ENABLE();  /*GPIOx口使能 GPIO口使能*/


  // /*GPIO口的配置*/
  //  GPIO_InitStruct.Pin = GPIO_PIN_x;                    /*引脚号0~15，需要时将x改为需要的引脚号*/
  // GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;           /*GPIO_MODE_INPUT 输入模式     GPIO_MODE_OUTPUT_PP 推挽输出   GPIO_MODE_OUTPUT_OD  开漏输出*/
  // GPIO_InitStruct.Pull = GPIO_NOPULL;                   /* GPIO_NOPULL  无上拉无下拉    GPIO_PULLUP  上拉   GPIO_PULLDOWN   下拉  */
  // GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;          /*GPIO_SPEED_FREQ_LOW 低速 MEDIUM 中速  HIGH  高速*/
  // HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);               /*GPIO口初始化，记得把x改成相对应的端口*/


  /*Configure GPIO pin Output Level */
  // HAL_GPIO_WritePin(GPIOx, GPIO_PIN_x, GPIO_PIN_RESET);  /*记得把端口的x和引脚号的x换掉，这是写入函数*/
  // HAL_GPIO_TogglePin(GPIOx,GPIO_PIN_x);                  /*这个是电平翻转函数，执行这个函数的电平反转*/


}