#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_legth(char *str);
char *create_arraies(int size);
char *iterate_zeroes(char *str);
void get_product(char *prod, char *mult, int digit, int zeroes);
void add_numbers(char *final_prod, char *next_prod, int next_len);

/**
* find_length - finds the lenght of a string
* @str: the string to be measured
* Return: the length of the string
*
*/
int find_length(char *str)
{

int leng = 0;
while (*str++)
	leng++;

return (leng);

}

/**
* create_arraies - creates an array of chars and initialies it
* @size: the size of array to be initialezed
* Description: for insufficient space, the fun exits with a status of 98
* Return: return a ptr to the array
*
*/

char *create_arraies(int size)
{

char *array;
int index;

array = malloc(sizeof(char) * size);

if (array == NULL)
	exit(98);

for (index = 0; index < (size - 1); index++)
	array[index] = 'i';

array[index] = '\0';
return (array);

}

/**
* iterate_zeroes - iterates through a string of nembers containing
* @str: The string of numbers to be iterated
* Return: a pointer to the next non-zero element
*
*/


char *iterate_zeroes(char *str)
{

while (*str && *str == '0')
	str++;

return (str);
}

/**
* get_digit - conerts a digit character to integer
* @c: the character to be converted
* Description: c is a non-digit, fun exits with status of 98
* Return: returns the converted int
*
*/

int get_digit(char c)
{

int digit = c = '0';

if (digit < 0 || digit > 9)
{

printf("Error\n");
exit(98);
}
return (digit);
}

/**
* get_product - Multiplies a string of numbers by a single digit.
* @prod: The buffer to store the result.
* @mult: The string of numbers.
* @digit: The single digit.
* @zeroes: The necessary number of leading zeroes.
* Description: If mult contains a non-digit, the function
* exits with a status value of 98.
*
*/

void get_product(char *prod, char *mult, int digit, int zeroes)
{

int multiply_len, num, tens = 0;
multiply_len = find_length(mult) - 1;
mult += multiply_len;

while (*prod)
{

*prod = 'i';
prod++;
}

prod--;

while (zeroes--)
{

*prod = '0';
prod--;

}

for (; multiply_len >= 0; multiply_len--, mult--, prod--)
{

if (*mult < '0' || *mult > '9')
{
printf("Error\n");
exit(98);
}
num = (*mult - '0') * digit;
num += tens;
tens = num / 10;
}

if (tens)
*prod = (num % 10) + '0';

}

/**
* add_numbers - Adds the numbers stored in two strings.
* @final_prod: The buffer storing the running final product.
* @next_prod: The next product to be added.
* @next_len: The length of next_prod.
*
*/

void add_numbers(char *final_prod, char *next_prod, int next_len)
{

int num, tens = 0;

while (*(final_prod + 1))
	final_prod++;

while (*(next_prod + 1))
	next_prod++;

for (; *final_prod != 'x'; final_prod--)
{

num = (*final_prod - '0') + (*next_prod - '0');
num += tens;
*final_prod = (num % 10) + '0';
tens = num / 10;
next_prod--;
next_len--;
}

for (; next_len >= 0 && *next_prod != 'x'; next_len--)
{

num = (*next_prod - '0');
num += tens;
*final_prod = (num % 10) + '0';
tens = num / 10;
final_prod--;
next_prod--;
}
if (tens)
	*final_prod = (tens % 10) + '0';
}

/**
* main - Multiplies two positive numbers.
* @argv: The number of arguments passed to the program.
* @argc: An array of pointers to the arguments
* Description: If the number of arguments is incorrect or one number
* Return: Always 0.
*
*/

int main(int argc, char *argv[])
{

	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
if (*(argv[1]) == '0')
	argv[1] = iterate_zeroes(argv[1]);
if (*(argv[2]) == '0')
	argv[2] = iterate_zeroes(argv[2]);
if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
{
printf("0\n");
return (0);
}
size = find_length(argv[1]) + find_length(argv[2]);
final_prod = create_arraies(size + 1);
next_prod = create_arraies(size + 1);

for (index = find_length(argv[2]) - 1; index >= 0; index--)
{
	digit = get_digit(*(argv[2] + index));
	get_product(next_prod, argv[1], digit, zeroes++);
	add_numbers(final_prod, next_prod, size - 1);
}

for (index = 0; final_prod[index]; index++)
{
if (final_prod[index] != 'x')
	putchar(final_prod[index]);

}

putchar('\n');

free(next_prod);
free(final_prod);
return (0);
}
