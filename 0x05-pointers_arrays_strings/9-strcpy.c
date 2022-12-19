#include "main.h"

/**
 * *_strcpy - a function that copies a string pointed by src to paste it
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: Always true
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	dest = '\0';
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
