#include "main.h"

/**
* reverse_array - prints a function that reverses the content
* @a: an array with pointer
* @n: an array elemente
*
*/

void reverse_array(int *a, int n)
{
int *p, i, rev_ary, j;

p = a;
	for (i = 0; i < n; i++)
		p++;
	for (j = 0; j < i / 2; j++)
	{
	rev_ary = a[j];
	a[j] = *p;
	*p = rev_ary;
	p--;
	}
}
