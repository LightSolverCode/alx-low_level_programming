#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check the code.
 * @c: argument passed
 * Return: Always 0.
 */
int _isupper(int c)
{
	if isupper(c)
	{
		putchar('1');
	}
	else if (islower(c))
	{
		putchar('0');
	}
	return (0);
}
