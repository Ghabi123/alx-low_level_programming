#include "main.h"
/**
 * _abs - Returns the absolute value of a number
 * @n: the number to return its absolute value
 * Return: always n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
