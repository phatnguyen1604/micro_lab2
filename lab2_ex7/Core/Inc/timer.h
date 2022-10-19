/*
 * timer.h
 *
 *  Created on: Oct 3, 2022
 *      Author: 84977
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;//delay 100 cho second, buffer
extern int timer2_flag;//delay 50 cho dot
extern int timer3_flag;//delay 25 cho led
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
