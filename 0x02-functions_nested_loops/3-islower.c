#include "main.h"
/**
 * _islower - checks if a char is lower
 *
 * @c: the char
 * Return: 1 if char is lowercase, 0 if is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
