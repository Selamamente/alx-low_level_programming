#include "main.h"

/**
* _strcpy - prints function that copies the string pointed to by src
* @dest: hold destination value
* @src: hold source values
* Return: the pointer to its destination
*
*/
char *_strcpy(char *dest, char *src)
{

int i;
for (i = 0; src[i] != '\0'; i++)
{


dest[i] = src[i];
}
dest[i++] = '\0';

return (dest);
}
