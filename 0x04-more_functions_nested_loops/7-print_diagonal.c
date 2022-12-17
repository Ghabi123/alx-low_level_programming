#include "main.h"
/**
 * print_diagonal - prints a diagonale using '\'
 * @n: how many times the program prints '\'
 * Return: Always 0(Done)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (i - 1); j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
