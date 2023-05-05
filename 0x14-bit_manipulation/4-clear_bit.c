#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer of an unsigned long int.
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
*/

int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index > 63)

		return (-1);


	*n = (~(1ul << index) & *n);

	return (1);

}


