#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'c';
	if isupper(c)
	{
		printf("%c: 1\n", c);
	}
	else
	{
		printf("%c: 0\n", c);
	}
	return (0);
}
