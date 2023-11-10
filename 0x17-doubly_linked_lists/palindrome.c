#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @number: integer to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(int number)
{
	int original = number;
	int reverse = 0;

	while (number > 0)
	{
		int digit = number % 10;

		reverse = reverse * 10 + digit;
		number /= 10;
	}

	return (original == reverse);
}

/**
 * main - inter points.
 *
 * Return: 0 always.
 */

int main(void)
{
	int largest_palindrome = 0;
	int i, j, product;
	FILE *file;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;

			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}

	file = fopen("102-result", "w");

	if (file)
	{
		fprintf(file, "%d", largest_palindrome);
		fclose(file);
	}

	return (0);
}

