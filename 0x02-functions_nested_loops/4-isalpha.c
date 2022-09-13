#include "main.h"
/**
  * int _isalpha(int c); -> checks alphabetic character.
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
