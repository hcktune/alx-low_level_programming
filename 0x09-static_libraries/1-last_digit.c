#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10; /* last digit to get LSB (least significant bit) */

	printf("Last digit of %d is %d ", n, l);

	if (l > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (l < 6 && l != 0)
	{
	printf("and is less than 6 and not 0\n");
	}
	else
	{
	printf("and is 0\n");
	}

	return (0);
}
