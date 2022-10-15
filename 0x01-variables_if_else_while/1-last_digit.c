#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program entry point.
 * 
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is equal to 0\n", n, ld);
	}
	else if (1<=ld<6)
	{
		printf(" last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}

