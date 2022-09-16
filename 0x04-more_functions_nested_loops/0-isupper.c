#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check the code.
 * @c: argument passed
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
