#include "main.h"

/**
 * _strlen - the length of a string
 *
 * @s: string
 *
 * Return: the lenght of the string
*/

int _strlen(char *s)
{
        int i;

        for (i = 0; *s != '\0'; s++)
                ++i;

        return (i);
}
