#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string
 *
 *Return: Nothing
*/

void rev_string(char *s)
{
int l, i;
char tmp;

/*find string lenth without null char*/
for (l = 0; s[l] != '\0'; ++1)
;

/*swap the string by looping to half the string*/
for (i = 0; i < l / 2; i++)
{
tmp = s[i];
s[i] = s[l - 1 - i]; /*-1 because the array starte from 0*/
s[l - 1 - i] = tmp;
}
}
