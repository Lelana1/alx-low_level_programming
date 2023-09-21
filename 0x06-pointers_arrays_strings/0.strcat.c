#include "main.h"

/**
 *_strcat - this function concatenates two strings.
 *@dest:first input value.
 *@src: Second input value.
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
int i, j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
