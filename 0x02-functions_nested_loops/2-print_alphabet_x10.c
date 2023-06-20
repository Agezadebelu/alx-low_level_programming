#include "main.h"
/**
 * print_alphabet_x10 - function print 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char let;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
