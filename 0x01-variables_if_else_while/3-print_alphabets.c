#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 no error, non zero if error.
 **/
int main(void)
{
	char small;
	char large;

	for (small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}
	for (large = 'A'; large <= 'Z'; large++)
	{
		putchar(large);
	}
	putchar('\n');
	return (0);
}
