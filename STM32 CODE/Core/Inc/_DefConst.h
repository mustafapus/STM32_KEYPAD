#define res_ LL_GPIO_ResetOutputPin
#define set_ LL_GPIO_SetOutputPin
#define tog_ LL_GPIO_TogglePin
#define setEx_ LL_EXTI_EnableIT_0_31
#define IsEnblEx_ LL_EXTI_IsEnabledIT_0_31
#define isinset_(Check) LL_GPIO_IsInputPinSet(Check)
#define isoutset_(Check) LL_GPIO_IsOutputPinSet(Check)

/////////////////////////GPIO////////////////////////////

#define ROW1_PIN LL_GPIO_PIN_12
#define ROW1_PORT GPIOB
#define ROW2_PIN LL_GPIO_PIN_13
#define ROW2_PORT GPIOB
#define ROW3_PIN LL_GPIO_PIN_14
#define ROW3_PORT GPIOB
#define ROW4_PIN LL_GPIO_PIN_15
#define ROW4_PORT GPIOB

#define COL1_PIN LL_GPIO_PIN_8
#define COL1_PORT GPIOA
#define COL2_PIN LL_GPIO_PIN_9
#define COL2_PORT GPIOA
#define COL3_PIN LL_GPIO_PIN_10
#define COL3_PORT GPIOA
#define COL4_PIN LL_GPIO_PIN_11
#define COL4_PORT GPIOA

/////////////////////////GPIO////////////////////////////

////////////////////////ARRAYS////////////////////

////////////////////////ARRAYS////////////////////

////////////////////////BUTTONS////////////////////

////////////////////////BUTTONS////////////////////

///////////////////////////TIMERS///////////////////////////

uint32_t delay_1ms_cnt=0;
uint32_t delay_10us_cnt=0;

///////////////////////////TIMERS///////////////////////////

/////////////////////////////VALUE//////////////////////

char keys[4][4] = {{'1', '2', '3', 'A'},
                   {'4', '5', '6', 'B'},
                   {'7', '8', '9', 'C'},
                   {'*', '0', '#', 'D'}};

char key_pressed = 0;

/////////////////////////////VALUE//////////////////////









