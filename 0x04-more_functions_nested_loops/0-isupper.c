#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check the code.
 * @c: argument passed
 * Return: Always 0.
 */
int _isupper(int c)
{
	int zero = 0;
	int one = 1;

	if isupper(c)
	{
		printf("%d: %d\n", c, one);
	}
	else if (islower(c))
	{
		printf("%d: %d\n", c, zero);
	}
	return (0);
}
