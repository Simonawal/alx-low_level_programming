#include <stdio.h>
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
        *b =temp;
}
