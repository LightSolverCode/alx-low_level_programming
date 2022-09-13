#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - x10 alphabet
 */
void print_alphabet_x10(void)
{
	char ch;
	char a;

	for (ch = 0; ch < 10; ch++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}

}
