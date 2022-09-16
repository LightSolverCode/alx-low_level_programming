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
		printf("%d: 1\n", c);
	}
	else if (islower(c))
	{
		printf("%d: 0\n", c);
	}
	return (0);
}
