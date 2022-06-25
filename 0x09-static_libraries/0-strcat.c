#include "main.h"
/**
* _strcat - function that concatenates two strings
* @dest: parameter 1
* @src: parameter2
* Return: the destination
*
*/

char *_strcat(char *dest, char *src)
{

int n, i;
n = 0;
while (dest[n])

n++;
for (i = 0; src[i] != 0; i++)
{
dest[n] = src[i];
n += 1;
}

dest[n] = '\0';
return (dest);
}
