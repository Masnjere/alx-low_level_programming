#include "main.h"

/**
 * set_bit - sets a bit at a given ind to 1
 * @n: pointer to the no. to change
 * @index: ind of the bit to set to 1
 *
 * Return: 1 for success, -1 for errno and error set appropriately
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
