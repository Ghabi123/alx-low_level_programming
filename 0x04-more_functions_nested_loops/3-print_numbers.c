#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: always 0(success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
