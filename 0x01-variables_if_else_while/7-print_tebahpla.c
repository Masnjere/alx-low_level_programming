#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * folowed by a new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
