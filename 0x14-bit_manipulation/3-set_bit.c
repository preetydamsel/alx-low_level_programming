
#include "main.h"

/**
 * set_bit - set the value of a bit to 1.
 * at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > 63)
		return (-1);

	c = 1 << index;
	*n = (*n | c);

	return (1);
}
