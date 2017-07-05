/*
 * klawiatura.c
 *
 * Created: 2014-04-11 12:01:01
 *  Author: Michal
 */ 

#include <avr/io.h>
#include "hd44780.h"
#include <util/delay.h>
#include <stdio.h>




int main(void)
{
	lcd_init();
	lcd_cls();
	lcd_locate(0,0);
	lcd_str("KLIKNIJ MNIE!!!");
	
    while(1)
    {		
       			
    }
}




