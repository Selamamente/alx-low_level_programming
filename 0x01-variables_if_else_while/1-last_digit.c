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
	printf("lacst digit of %d is: ", n);
if (n > 1)
{
	printf("greater then 5");
}
if (n < 6 && n != 0)
{
	printf("less than 6 not 0");
}
if (n == 0)
{
	printf("0");
}

printf("\n");

return (0);
}