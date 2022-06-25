#include "main.h"

/**
* _memcpy - prints a function that copies memory area
* @dest: is destination memory
* @src: is source memory
* @n: number of bytes to be copied
* Return: string copied from source
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	dest[i] = src[i];
return (dest);

}
