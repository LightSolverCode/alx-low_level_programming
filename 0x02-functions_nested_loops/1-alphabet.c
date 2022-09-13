#include "main.h"
/**
 * print_alphabet - prints lowercase letter
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)/*print_alphabet in lowercase*/
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
