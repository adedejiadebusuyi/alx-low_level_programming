#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if number is positive, negative or zero
 *
 * Description: using the main function
 * this program prints "Programming is positive, negative or zero"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if  (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
