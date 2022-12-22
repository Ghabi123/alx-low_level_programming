#include<unistd.h>
/**
 * _putchar - writes the caracter c to stdout
 * @c: the caracter c to print
 * Return: on success 1 , -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, @c, 1));
}
