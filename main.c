#include "main.h"


/**************************************************************************
    @版权说明：在不收取他人费用的情况下，可以自由的分发本软件，分发时，保留本版权说明。
    @author  ：梅花七月香
    @data    ：2024-6-22
    @brief   ：点亮LED，使用面向对象的思想。
*****************************************************************************/




/******************************************************************************
 * @brief     简单的延时函数
 *
 * @param[in]  time  :  延时时间
 *
 * @return     无
 *
 ******************************************************************************/
void Delay(int time)
{
    for (int i = time; i > 0; i--) {
        for (int j = 0x2fff; j > 0; j--) {
            ;
        }
    }
}


LedDev_t gLedDev; //定义一个LED_t的结构体，用于保存LED相关资源

int main(void)
{

    LED_Init(&gLedDev, GPIO_LEVEL_LOW, GPIOA, GPIO_Pin_8);

    while (1) {
        LED_On(&gLedDev);    //打开LED灯
        Delay(1000);      //简单延时，约1秒，LED亮一秒

        LED_Off(&gLedDev);   //关闭LED灯
        Delay(1000);      //简单延时，约1秒，LED灭一秒
    }
}

