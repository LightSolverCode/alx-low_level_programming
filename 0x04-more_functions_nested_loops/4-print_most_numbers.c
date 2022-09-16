#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check the code.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 2 && a != 4)
		putchar(a + '0');
	}
	putchar ('\n');
}
