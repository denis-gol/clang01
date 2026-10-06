//
// Created by admin on 06.10.2026.
//

/**
 * Функции, которые используются в Embedded
 */

#ifndef CLANG01_HARDWARE_H
#define CLANG01_HARDWARE_H

#include <stdint.h>
#include <stdbool.h>

void set_gpio_to_out(volatile uint32_t *GPIO_MODER, int pin);

uint8_t pack_status(uint8_t error, bool bat, uint8_t speed);

uint8_t unpack_speed(uint8_t status_byte);



#endif //CLANG01_HARDWARE_H
