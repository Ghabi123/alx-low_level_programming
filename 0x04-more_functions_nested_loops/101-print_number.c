#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: an input integer
 * Return: always 0 Done
 */
void print_number(int n)
{
	if (n == 0)

		_putchar('0');

	else

	if (n < 0)
	{
		_putchar('-');
		while (n != 0)
		{
			_putchar((n % 10) + '0');
			n = n / 10;
		}
	}
	else
		while (n != 0)
		{
			_putchar((n % 10) + '0');
			n = n / 10;
		}
}

