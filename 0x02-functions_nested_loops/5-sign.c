#include "main.h"
/**
 * print_sign - return 1 if the letter is positive -1 if negative and 0 if null
 * @n: number to check
 * Return: -1 , 0 and 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
