#include "main.h"

/**
 * *_strcpy - kk
 * @dest: ll
 * @src: kk
 * Description: jjj
 * Return: hfh
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}
