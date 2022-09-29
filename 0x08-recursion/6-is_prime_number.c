#include "main.h"
/**
 * divisibility - entry point
 * @n: number to check
 * @d: dividing by
 * Return: o or 1 if divisible and not
 */
int divisibility(int n, int d)
{
	if (n % d == 0)
		return (0);

	if (d == n / 2)
		return (1);

	return (divisibility(n, d + 1));
}
/**
 * is_prime_number - entry point
 * @n: prime number
 * Return: return 1 if a prime number otherwise 0
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n <= 3 && n >= 2)
		return (1);

	return (divisibility(n, d));

}
