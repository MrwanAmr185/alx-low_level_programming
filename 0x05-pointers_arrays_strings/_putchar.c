#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On succoss 1.
 * On error, -1 is returned and erno is set appropriatly.
*/
int _putchar(char c);
{
	return (write(1, &c, 1));
}	
