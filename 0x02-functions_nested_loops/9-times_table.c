#include "main.h"
/**
 * times_table - shows the multiplication table
 * Return: Always 0(success)
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			if ((a * b) < 10)
			{
				_putchar(a * b + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((a * b / 10) + '0');
				_putchar((a * b % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
