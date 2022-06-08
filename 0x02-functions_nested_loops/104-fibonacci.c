#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2
* Description: the first 98 Fibonacci numbers
* Return: return 0 for success
*
*/

int main(void)
{


unsigned long int n, i, j, i1, i2, j1, j2;

	i = 1;
	j = 2;

	printf("%lu", i);

	for (n = 1; n < 91; i++)
	{

	printf(", %lu", j);
	j = j + i;
	i =   j - i;
	}

	i1 = i / 1000000000;
	i2 = i % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (n = 92; n < 99; ++n)
	{

	printf(", %lu", j1 + (j2 / 1000000000));
	printf("%lu", j2 % 1000000000);
	j1 = j1 + i1;
	i1 = j1 - i1;
	j2 = j2 + i2;
	i2 = j2 - i2;

	}
	printf("\n");
	return (0);
}
