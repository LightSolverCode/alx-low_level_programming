#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - check the code
 * @a: the argument
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -a;
		return (a % 10);
	}
}
