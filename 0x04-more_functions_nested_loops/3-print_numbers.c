#include "main.h"
/**
 * print_numbers - prints numbers
 * dicription: print numbers from 0 to 9 
 */
void print_numbers(void)
{
	char i;
	i = 0;
	if (i >= 0 && i <= 9)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
