#include "main.h"

/**
 * _strncat - concatinates two strings with n bytes
 * @n: number of bytes to be copied
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
