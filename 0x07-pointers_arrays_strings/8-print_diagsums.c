#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of two diagonals of a square matrix
* @a: the matrix with integer
* @size: the size with integer
*
*/

void print_diagsums(int *a, int size)
{

int i, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{

	add1 += a[(size + 1) * i];
	add2 += a[(size - 1) * (i + 1)];
	}
printf("%d, %d\n", add1, add2);
}
