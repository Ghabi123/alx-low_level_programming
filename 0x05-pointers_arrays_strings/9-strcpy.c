#include "main.h"

/**
 * *_strcpy - a function that copies a string pointed by src to paste it
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: Always succeed
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[len] != '\0')
		len++;

	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
