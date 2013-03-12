/**
 * ----------------------------------------------------------------------------
 *
 * "THE ANY BEVERAGE-WARE LICENSE" (Revision 42 - based on beer-ware license):
 * <dev@layer128.net> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a be(ve)er(age) in return. (I don't
 * like beer much.)
 *
 * Matthias Kleemann
 *
 * ----------------------------------------------------------------------------
 *
 * \file leds.h
 *
 * \date Created: 28.11.2011 18:15:48
 * \author Matthias Kleemann
 *
 **/



#ifndef LEDS_H_
#define LEDS_H_

#include "../config/leds_config.h"

/***************************************************************************/
/* PROTOTYPES                                                              */
/***************************************************************************/

/**
 * @brief  initializes ports and bits connected to leds
 */
void led_init(void);

/**
 * @brief switches a led defined by a number on
 * @param led to be switched, defined by enum in leds_config.h
 */
void led_on(eLED led);

/**
 * @brief switches a led defined by a number off
 * @param led to be switched, defined by enum in leds_config.h
 */
void led_off(eLED led);

/**
 * @brief toggles a led defined by a number
 * @param led to be switched, defined by enum in leds_config.h
 */
void led_toggle(eLED led);

/**
 * @brief switches all LEDs off, e.g. fo power down modes
 */
void led_all_off(void);

/**
 * @brief switches all LEDs on, e.g. for signalling
 */
void led_all_on(void);

#endif /* LEDS_H_ */