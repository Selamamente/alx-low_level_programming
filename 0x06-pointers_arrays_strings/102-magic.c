#include <stdio.h>

/**
* main - prints a[2] = 98
* Description: A dream doesn't become reality through magic
* Return: return 0 for success
*
*/
int main(void)
{

int n;
int a[5];
int *p;

*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
