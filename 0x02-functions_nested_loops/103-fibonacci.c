#include <stdio.h>

/**
* main - prints the sum of the even-valued terms
* Description: Even Liber Abbaci
* Return: return 0 for success
*
*/

int main(void)
{

int n;
unsigned long int i, j, nxt, sum;
i = 1;
j = 2;
sum = 0;

	for (n = 1; n <= 33; ++n)
	{

	if (i < 4000000 && (j % 2) == 0)
	{

	sum = sum + i;
	}
	nxt = i + j;
	i = j;
	j = nxt;
	}

	printf("%lu\n", sum);
	return (0);

}
