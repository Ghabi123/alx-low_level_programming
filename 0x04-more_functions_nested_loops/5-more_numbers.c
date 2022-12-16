#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * Return: Always 0(success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
