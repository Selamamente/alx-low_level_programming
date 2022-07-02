#include "main.h"
#include <stdlib.h>

/**
* _calloc - prints a function that allocates memory for an array
* @nmemb: a number of elements
* @size: a byte of size of each array element
* Return: if nmemb& size = 0 or z fun fails returns NULL otherwise a pointer
*
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;
char *i;
unsigned int index;

if (nmemb == 0 || size == 0)
	return (NULL);

mem =  malloc(size * nmemb);

if (mem == NULL)
	return (NULL);

i = mem;
for (index = 0; index < (size * nmemb); index++)
	i[index] = '\0';
return (mem);

}
