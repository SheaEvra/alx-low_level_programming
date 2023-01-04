#include "main.h"
int prime_number(int, int);
/**
 * is_prime_number - checks the prime number
 * @n: number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (prime_number(n, 1));
}

/**
 * prime_number -checks the prime number
 * @n: number being checked
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int prime_number(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		_putchar(1);

	return (prime_number(n, i + 1));
}
