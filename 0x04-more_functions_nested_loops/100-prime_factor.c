#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime facto of the number 612852475143
 * followed by a new line
 * Return: always 0 (Success)
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != 1))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
