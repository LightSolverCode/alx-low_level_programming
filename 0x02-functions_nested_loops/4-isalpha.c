#include "main.h"
/**
 * _isalpha - check the code.
 * @c: argument passed
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
