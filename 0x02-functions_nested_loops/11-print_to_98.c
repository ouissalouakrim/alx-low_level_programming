#include"main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar('n');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar('n');
			n--;
		}
	}
	_putchar(98);
}


