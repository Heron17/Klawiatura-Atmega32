#include <avr/io.h>
#include <util/delay.h>
#include "hd44780.h"


char str[]=" Termometr ";
int main(void)
{
	lcd_init(); /* Funkcja inicjalizuje wyœwietlacz */
	 /* W³¹cza wyœwietlanie */
	LCD_DISPLAY(LCDDISPLAY); //|LCDCURSOR
	/* Czyœci ekran */
	LCD_CLEAR;
	/* Wyœwietla tytu³ */
	LCD_LOCATE(0,0);
	lcd_puts(str);
	
	
	
	
	
	while(1)
	{
		
	
	
	}
}