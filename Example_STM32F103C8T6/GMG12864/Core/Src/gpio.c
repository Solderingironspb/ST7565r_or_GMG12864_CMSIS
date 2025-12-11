#include "main.h"

void gpio_init(void) {

    //Включим тактирование порта B
    SET_BIT(RCC->APB2ENR, RCC_APB2ENR_IOPBEN);

    // GMG12864 RST - PB0
    MODIFY_REG(GPIOB->CRL, GPIO_CRL_MODE0_Msk, 0b11 << GPIO_CRL_MODE0_Pos);
    MODIFY_REG(GPIOB->CRL, GPIO_CRL_CNF0_Msk, 0b00 << GPIO_CRL_CNF0_Pos);

    // GMG12864 Data/Command - PB1
    MODIFY_REG(GPIOB->CRL, GPIO_CRL_MODE1_Msk, 0b11 << GPIO_CRL_MODE1_Pos);
    MODIFY_REG(GPIOB->CRL, GPIO_CRL_CNF1_Msk, 0b00 << GPIO_CRL_CNF1_Pos);

}