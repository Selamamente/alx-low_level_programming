#include "main.h"

/**
* swap_int - prints a function that swaps the values of two integers.
* @a: pointer1
* @b: pointer2
*
*/
void swap_int(int *a, int *b)
{

int swapHere;
swapHere = *a;
*a = *b;
*b = swapHere;

}
