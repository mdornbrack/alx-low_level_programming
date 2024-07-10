#include "main.h"

int is_prime_helper(int n, int i);

/**
* is_prime_number - returns 1 if the input integer is a prime number
* otherwise return 0.
* @n: the input integer
*
* Return: 1 if n is a prime number, otherwise 0
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, n - 1));
}

/**
* is_prime_helper - checks if n is divisible by any number from 2 to i
* @n: the input integer
* @i: the divisor
*
* Return: 1 if n is not divisible by any number from 2 to i, otherwise 0
*/
int is_prime_helper(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i - 1));
}
