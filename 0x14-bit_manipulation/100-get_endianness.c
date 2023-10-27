#include "main.h"

/**
 * get_endianness - endianness checked by program
 *
 * Return: 0 if Big endian, else 1 for Little endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
