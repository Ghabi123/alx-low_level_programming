#include "main.h"
/**
 * print_line - prints a clever line
 * @n: number of times the _ should be printed
 * Return: a line if n > 0 blank line otherwise
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}

	_putchar('\n');
}
