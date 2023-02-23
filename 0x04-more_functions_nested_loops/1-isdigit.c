#include "main.h"
/**
 * _isdigit - check for digits
 * @c : digits to be checked
 * dicription: checking for digits
 * Return: 1 if digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
