/*
 * Servo.c
 *
 *  Created on: Oct 10, 2022
 *      Author: ahmed
 */

#include "Servo.h"
#include "ultrasonic.h"
#include <util/delay.h>

void servo_init(void)
{
	TCNT1 = 0;		/* Set timer1 count zero */
	   TCCR1A|=(1<<COM1A1)|(1<<WGM11);        //NON Inverted PWM
	   TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10); //PRESCALER=64 MODE 14(FAST PWM)

	   ICR1=4999;  //fPWM=50Hz (Period = 20ms Standard).

	   DDRD|=(1<<PD5);   //PWM Pins as Out
}

void servo_move(int angle)
{
	OCR1A=angle;
}

//void check(void)
//{
//	motor_stop();
//	char done=0;
//	servo_move(Angle0);
//	_delay_ms(1000);
//
//	if(get_distance()>min_allowed_distance)// cm between the ultrasonic and the object
//	{
//		_delay_ms(200);
//		right();//turn right
//		done=1;
//	}
//	else if(1)
//	{
//		servo_move(Angle180);
//		_delay_ms(1000);
//		if(get_distance()>min_allowed_distance)// cm between the ultrasonic and the object
//			{
//				left();//turn left.
//				done=1;
//			}
//	}
//
//
//	if(done==1)
//		{
//			servo_move(Angle90);
//			move();
//			done=0;
//		}
//	else motor_stop();
//}

