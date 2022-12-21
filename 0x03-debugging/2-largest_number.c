#include "main.h"

/**
 * largest_number - prints the largest amoung 3 integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	else if (c >= a && c >= b)
		largest = c;
	return (largest);
}
