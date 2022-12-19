#include "main.h"

/**
 * puts2 - prints every other caracter
 * @str: An input string
 * Return: always 1 Done
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;
	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
