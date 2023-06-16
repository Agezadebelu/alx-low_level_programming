/*
 * File: 8-print_base16.c
 * Auth: Ageza Debelu
 */

#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits of base 10 followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
