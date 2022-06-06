#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign a random number to variable n
* Discription: the last digit
* Return: return 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n);
if (n > 5)
{
	printf("greater than 5");
}
if (n == 0)
{
	printf("0");
}
if (n < 6 && n != 0)
{
	printf("less than 6 and not 0");
}

printf("\n");

return (0);
}
