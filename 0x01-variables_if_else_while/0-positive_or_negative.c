#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determines if  a number is positive,negative or zero.
 *
 * return: always 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n > 0)
	{
	       	printf("%d is positive\n",n);
		
	}
	else if(n < 0)
	{
		printf("%d is negative\n",n);
	}
	else
	{
		printf("%d is zero\n",n);
=======
	if(n>0);
	{ printf("%d is positive\n",n);
		}
	else if(n==0);
	{printf("%d is zero\n",n);
	}
	else(n<0);
	{printf("%d is negative\n",n);
>>>>>>> 8d0d240b2d1fa737637f2a74d46189ecc6ea0bcc
	}
	return (0);
}
