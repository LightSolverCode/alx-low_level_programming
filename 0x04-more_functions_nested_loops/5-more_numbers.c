#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				putchar((y / 10) + '0');
			putchar((y % 10) + '0');
		}
		putchar('\n');
	}
}

