/*******************************************************************************************
THis is a simple demonstration on blinking an led
********************************************************************************************/
/*******************************************************************************

* Module name: blink_an_led_1.c

*

* History:

* First written on 1/17/2015 by Mahesh.N.

*

* Module Description:

* here pin PB0 is connected to an led and it is on for 2seconds and off for 1 seconds

*******************************************************************************/
/*******************************************************************************

* Include section

*

*******************************************************************************/
#include<avr/io.h>
#include<util/delay.h>
/*****************************************************************************************
* Function name : 	void main(void)
* returns 		: 	none
* arg			: 	none
* Created by 	: 	Mahesh.N
* Date created 	: 	1/17/2015
* Description 	: 	main function
* Notes : 
******************************************************************************************/
void main(void)
{
DDRB|=1<<PINB0;             //make pin PB0 as a output pin by setting the corresponding data-direction register.
PORTB|=1<<PINB0;            //make the pin PB0 high(5V) by setting the corresponding port register. 
while(1)                    //endless loop
{
PORTB&=~(1<<PINB0);        //make the pin low(0V).
_delay_ms(1000);            //give a delay of 1000 milliseconds(1 seconds).this function is defined in util/delay.h
PORTB|=1<<PINB0;            //make the pin high(5V).
_delay_ms(2000);            //give a delay of 2000 milliseconds(2 seconds).
}

}
/*******************************************************************************************
END of main funtion
*******************************************************************************************/