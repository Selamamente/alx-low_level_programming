#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its name
* @argc: paramater
* @argv: an array command
* Return: returns 0 for success
*
*/

int main(int argc, char *argv[])
{


	int result = 0, num, i, j, x;

	for (i = 1; i < argc; i++)
	{

	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (argv[i][j] > '9' || argv[i][j] < '0')
	{
	printf("%s\n", "Error");
	return (1);
	}
	}
	}

	for (x = 1; x < argc; x++)
	{

	num = atoi(argv[x]);
	result += num;

	}

printf("%d\n", result);
return (0);
}
