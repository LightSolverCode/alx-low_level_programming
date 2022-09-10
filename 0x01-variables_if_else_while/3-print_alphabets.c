#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lowercase and then in uppercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char u;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			putchar(u);
		}
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
