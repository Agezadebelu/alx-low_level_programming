#include <stdio.h>
#include "main.h"

/**
 * main - entery point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line w/
 * for multiples of three print Fizz and for the multiples of five print Buzz
 * and FizzBuzz for  multiples of both
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
