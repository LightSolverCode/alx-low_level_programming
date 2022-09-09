#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar(ch);

		putchar ("\n");
	}
	return (0);
}
