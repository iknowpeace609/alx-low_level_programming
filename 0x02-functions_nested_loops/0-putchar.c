#include "main.h"

/**
 * main - Prints main as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {109, 97, 105, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
