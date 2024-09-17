

void TIM16_IRQHandler(void)
{
if (LL_TIM_IsActiveFlag_UPDATE(TIM16)) {
	LL_TIM_ClearFlag_UPDATE(TIM16);	
// 10us
	delay_10us_cnt++;	
}
}




void TIM17_IRQHandler(void)
{
if (LL_TIM_IsActiveFlag_UPDATE(TIM17)) {
	LL_TIM_ClearFlag_UPDATE(TIM17);	
// 1ms
delay_1ms_cnt++;
key_pressed = keypad_scan();

	}
}







