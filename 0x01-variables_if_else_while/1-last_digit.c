#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-program
 *return: 0
 */
int main(void)
{
  int n;
  int end_digit;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  end_digit = n % 10;
  if (end_digit > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, end_digit);
    }
  else if (end_digit == 0)
    {
      printf("last digit of %d is %d and is 0\n", n, end_digit);
    }
  else if (end_digit < 6 && end_digit !=0)
    {
      printf("last digit of %d is %d and is less than 6 and not 0\n", n, end_digit);
    }
  return (0);
}
