#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'prints all single digit numbets of base 10 starting from 0'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 15; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
