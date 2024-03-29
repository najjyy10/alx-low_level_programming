#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: Decimal number passed by pointer
 * @index: index position to change starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ptr;

	if (index > 64)
		return (-1);

	for (ptr = 1; index > 0; index--, ptr *= 2)
		;
	*n += ptr;

	return (1);
}
