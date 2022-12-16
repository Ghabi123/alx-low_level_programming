#include "main.h"
/**
 * _isalpha - Return 1 if the caracter is an alphabet
 * @c: an int value to be compared with the ASCII value
 * Return: 1 if the caracter is an alphabet 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
