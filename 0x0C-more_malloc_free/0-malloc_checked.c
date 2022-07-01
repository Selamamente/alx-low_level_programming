#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: a number of bytes to be allocated
* Return: a pointer to the allocated memory
*
*
*/

void *malloc_checked(unsigned int b)
{

void *memory = malloc(b);

if (memory == NULL)
	exit(98);
return (memory);
}
