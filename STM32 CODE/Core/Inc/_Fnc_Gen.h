


void delay_1ms(uint32_t num1){
	delay_1ms_cnt=0;
while (delay_1ms_cnt < num1) {asm("NOP");}
}

void delay_10us(uint32_t num1){
	delay_10us_cnt=0;
while (delay_10us_cnt < num1) {asm("NOP");}
}




char keypad_scan(void)
{


  for(int i = 0; i < 4; i++)
  {
    // Set current column as output and low
    switch(i)
    {
      case 0:
    	  LL_GPIO_ResetOutputPin(COL1_PORT, COL1_PIN);
    	  LL_GPIO_SetOutputPin(COL2_PORT, COL2_PIN);
    	  LL_GPIO_SetOutputPin(COL3_PORT, COL3_PIN);
    	  LL_GPIO_SetOutputPin(COL4_PORT, COL4_PIN);
    	  break;

      case 1:
    	  LL_GPIO_SetOutputPin(COL1_PORT, COL1_PIN);
    	  LL_GPIO_ResetOutputPin(COL2_PORT, COL2_PIN);
    	  LL_GPIO_SetOutputPin(COL3_PORT, COL3_PIN);
    	  LL_GPIO_SetOutputPin(COL4_PORT, COL4_PIN);
    	  break;

      case 2:
	  	  LL_GPIO_SetOutputPin(COL1_PORT, COL1_PIN);
	  	  LL_GPIO_SetOutputPin(COL2_PORT, COL2_PIN);
	  	  LL_GPIO_ResetOutputPin(COL3_PORT, COL3_PIN);
	  	  LL_GPIO_SetOutputPin(COL4_PORT, COL4_PIN);
	  	  break;

      case 3:
	  	  LL_GPIO_SetOutputPin(COL1_PORT, COL1_PIN);
	  	  LL_GPIO_SetOutputPin(COL2_PORT, COL2_PIN);
	  	  LL_GPIO_SetOutputPin(COL3_PORT, COL3_PIN);
	  	  LL_GPIO_ResetOutputPin(COL4_PORT, COL4_PIN);
	  	  break;
}


// Read current rows
if(LL_GPIO_IsInputPinSet(ROW1_PORT, ROW1_PIN) == 0)
  return keys[0][i];
if(LL_GPIO_IsInputPinSet(ROW2_PORT, ROW2_PIN) == 0)
  return keys[1][i];
if(LL_GPIO_IsInputPinSet(ROW3_PORT, ROW3_PIN) == 0)
  return keys[2][i];
if(LL_GPIO_IsInputPinSet(ROW4_PORT, ROW4_PIN) == 0)
  return keys[3][i];
}
return 0; // No key pressed
}
