#include "main.h"

/**
* leet - prints a function that encodes a string into 1337
* @x: parameter
* Return: return the parameter
*
*/

char *leet(char *x)
{

int a = 0, b, l = 5;
char ltr[5] = {'A', 'E', 'O', 'T', 'L'};
char nbr[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
	b = 0;
		while (b < 1)
		{
		if (x[a] == ltr[b] || x[a] - 32 == ltr[b])
			x[a] = nbr[b];
		b++;
		}
		a++;
	}
	return (x);
}
