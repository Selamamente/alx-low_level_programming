#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - prints a function that concatenates two strings
* @s1: the 1st string
* @s2: the 2nd string
* @n: the max number of bytes of s2 to concatenates to s1
* Return: returns NULL if the function fails otherwise a pointer
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *concat;
unsigned int leng = n, index;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

for (index = 0; s1[index]; index++)
	leng++;

concat = malloc(sizeof(char) * (leng + 1));

if (concat == NULL)
	return (NULL);

leng = 0;

for (index = 0; s1[index]; index++)
	concat[leng++] = s1[index];

for (index = 0; s2[index] && index < n; index++)
	concat[leng++] = s2[index];

concat[leng] = '\0';
return (concat);

}
