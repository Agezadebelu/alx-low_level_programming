#include "main.h"
/**
 * main - Determines if umber is positive,negative or zero.
(* 0 : is the number to be checked.
 * Retur: 0 on success
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

}
