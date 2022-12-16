#include "main.h"
/**
 * print_last_digit - Returns the last digit of a given number
 * @n: the given number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r <= 0)
	{
		r *= -1;
	}
	_putchar(r);
	return (r);
}
