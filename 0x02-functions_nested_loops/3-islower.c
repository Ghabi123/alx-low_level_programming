#include "main.h"
/**
 * _islower - checks if a caracter is lowercase or not if yes it returns 1.
 * otherwise returns 0.
 * @c: Is the int value to be compared with the ASCII value
 * Return: 1 if successful 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
