#include "main.h"

/**
 * *_strcpy - a function that copies a string pointed by src to paste it
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++ + '\0';
	return (aux);
}
