#include "main.h"
#include "stm32f103xx_CMSIS.h"
#include "GMG12864_lib.h"

/* Настройка GPIO:
 * Используется SPI1: CPOL - 0, CPHA - 0. Скорость  18 Мбит/с
 * - CS - PA6 (Нога изначальна предназначена под MISO, но т.к. нам нужно только отправлять команды,
 *   то можно просто убрать альтернативную функцию в регистре GPIOx->CRL-CNF)
 * - RST(Reset) - PB0
 * - DC(Data/Command) - PB1
 * - SCK - PA5
 * - MOSI - PA7
 */

int main(void) {
    CMSIS_Debug_init();
    CMSIS_RCC_SystemClock_72MHz();
    CMSIS_SysTick_Timer_init();
    gpio_init();
    CMSIS_SPI1_init();
    GMG12864_Init();
    GMG12864_logo_demonstration();

    while (1) {
    }
}