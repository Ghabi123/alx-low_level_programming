#include<unistd.h>
/**
 * putchar: writes the caracter c to stdout
 * main-Entry point
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
