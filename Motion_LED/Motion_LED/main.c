/*
 * Motion_Blink_m328p.c
 *
 * Created: 12/30/2022 5:19:16 PM
 * Author : engab
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0x03;
	
    while (1) 
    {
		if (PINC & (1<<2))
		{
			PORTC=0X01;
			_delay_ms(1000);
		}
		else 
		{
			PORTC=0X02;
		}
    }
}

