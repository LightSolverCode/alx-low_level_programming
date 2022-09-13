#include <main.h>
/*
 * main: print the alphabet in lowercase x10 .
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
	char ch;
	char a;

	for (ch = 0; ch < 10; ch++)
	{
		for (a = 'A' ; a <= 'Z' ; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}

	return (0);
}
