#include "main.h"

/**
 * swap_int - swaps the values of 2 numbers
 * @a: input integer pointer
 * @b: input integer pointer
 * Return: always 0 done
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;

		*a = *b;

			*b = aux;
}
