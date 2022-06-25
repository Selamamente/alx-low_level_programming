#include "main.h"



/**
* _atoi - prints function that convert a string to an integer
* @s: the pointer to convert
* Return: an integer
*
*
*/

int _atoi(char *s)
{
int x = 0;
unsigned int num_int = 0;
int min_num = 1;
int infin_str_int = 0;

while (s[x])
{

	if (s[x] == 45)
	{
	min_num = -1;
	}
	while (s[x] >= 48 && s[x] <= 57)
	{
	infin_str_int = 1;
	num_int = (num_int * 10) + (s[x] - '0');
	x++;
	}
	if (min_num == 1)
	{
	break;
	}
	x++;
}
num_int *= min_num;
return (num_int);

}
