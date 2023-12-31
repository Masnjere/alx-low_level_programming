#include "main.h"

/**
 * clear_bit - sets the value of given bit to 0
 * @n: pointer to the no. to change
 * @index: ind of the bit to clear
 *
 * Return: 1 for success, -1 for errno and error set appropriately
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
