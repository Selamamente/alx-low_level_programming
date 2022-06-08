#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* Description: Fibonacci numbers
* Return: return 0 (succee)
*/

int main(void)
{

long int n, i, j, nxt;
i = 1;
j = 2;
	for (n = 1; n <= 50; ++n)
	{

	if (i != 20365011074)

	{
		printf("%ld, ", i);
	}
	else
	{
		printf("%ld\n", i);
	}

	nxt = i + j;
	i = j;
	j = nxt;
	}

return (0);
}
