/*
 * DcMotor.h
 *
 * Created: 12/14/2022 6:02:48 PM
 *  Author: ahmed
 */ 

#ifndef Dc.Motor.h
#define Dc.Motor.h
#include "avr/io.h"
#include <util/delay.h>


void motor_init(void);
void motor_1_forward(void);
void motor_2_forward(void);
void motor_stop(void);
void move(void);
void right(void);
void left(void);


#endif /* Dc.Motor.h */