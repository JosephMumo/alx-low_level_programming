#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: checked
 * Return: 1 if executed successfully
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
