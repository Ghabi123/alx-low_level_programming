#include "main.h"
/**
 *_islower - entry point. 
 *@c: formal caracter.
 *Return: 1 if successful. 0 otherwise.
 * 
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
