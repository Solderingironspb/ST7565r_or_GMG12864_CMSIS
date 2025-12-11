# ST7565r_or_GMG12864_CMSIS
```
//В example есть пример на STM32F103C8T6
/* Настройка GPIO:
 * Используется SPI1: CPOL - 0, CPHA - 0. Скорость  18 Мбит/с
 * - CS - PA6 (Нога изначальна предназначена под MISO, но т.к. нам нужно только отправлять команды, то можно просто убрать альтернативную функцию в регистре GPIOx->CRL-CNF)
 * - RST(Reset) - PB0
 * - DC(Data/Command) - PB1
 * - SCK - PA5
 * - MOSI - PA7
 */
```
![test](https://github.com/Solderingironspb/ST7565r_or_GMG12864_CMSIS/blob/main/test.jpg?raw=true)
![Подключение](https://github.com/Solderingironspb/ST7565r_or_GMG12864_CMSIS/blob/main/GMG12864_lib/GMG12864.jpg?raw=true)
