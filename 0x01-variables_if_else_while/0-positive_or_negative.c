#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main: return the required output */

/* description: positive or negative number */
/* return: return value 0 */

int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("the nuber is positive.\n");
}
else if (n < 0)
{
printf("the number is negative.\n");
}
else
{
printf("the number is zero.\n");
}
return (0);
}
