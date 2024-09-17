
#include "_Set_Timers.h"

 delay_1ms(20);
 delay_1ms(20);

 NVIC_SetPriority(SysTick_IRQn, 3);
 NVIC_SetPriority(TIM16_IRQn, 3);
 NVIC_SetPriority(TIM17_IRQn, 3);







