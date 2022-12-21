#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
