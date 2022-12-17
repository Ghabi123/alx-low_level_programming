#include "main.h"
/**
 * print_diagonal - prints a diagonale using \
 * @n: number of times the program prints \
 * Return: Always 0(success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');

}
