#include "main.h"
/**
 * print_line - prints a clever line
 * @n: number of times the _ should be printed
 * Return: a line if n > 0 blank line otherwise
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
