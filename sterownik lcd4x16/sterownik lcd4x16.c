#include <avr/io.h>
#include <util/delay.h>
#include "hd44780.h"


char str[]=" Termometr ";
int main(void)
{
	lcd_init(); /* Funkcja inicjalizuje wy�wietlacz */
	 /* W��cza wy�wietlanie */
	LCD_DISPLAY(LCDDISPLAY); //|LCDCURSOR
	/* Czy�ci ekran */
	LCD_CLEAR;
	/* Wy�wietla tytu� */
	LCD_LOCATE(0,0);
	lcd_puts(str);
	
	
	
	
	
	while(1)
	{
		
	
	
	}
}