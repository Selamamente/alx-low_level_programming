#include <stdio.h>
#include <stdlib.h>

/**
* main - prits its name
* @argc: is aparameter
* @argv: an array command
* Return: returns 0 for success
*
*/

int main(int argc, char *argv[])
{

int multiply, num1, num2;

	if (argc != 3)
	{

	printf("%s\n", "Error");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	multiply = num1 * num2;

	printf("%d\n", multiply);
	return (0);
}
