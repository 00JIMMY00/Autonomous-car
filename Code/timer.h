/***************************************************************
 *  Source File: timer.h
 *
 *  Description: Timer0 driver for ATMEGA32
 *
 **************************************************************/

#ifndef PWM_H_
#define PWM_H_

#include "timer_config.h"
#include <avr/io.h>
/*************************************************
 *  API functions
 *************************************************/

void timer0_init(void);

#endif /* PWM_H_ */
