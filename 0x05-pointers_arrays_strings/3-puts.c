#include "main.h"

/**
 * _puts - _puts
 *
 * @str: the string input
 *
 * Return: non
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
 str++;
}
_putchar('\n');
}
