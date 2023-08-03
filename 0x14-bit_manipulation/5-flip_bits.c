#include "main.h"

/**
  * flip_bits - shows the number of bits you would need to flip.
  * @n: A unsigned long integer.
  * @m: A unsigned long integer.
  *
  * Return: The number of bits you would need to flip.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}

