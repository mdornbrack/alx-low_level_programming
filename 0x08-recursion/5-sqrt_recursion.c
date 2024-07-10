#include "main.h"

/**
 * helper - helps to find the natural square root of a number.
 * @n: number to find square root of.
 * @i: iterator.
 *
 * Return: the natural square root of n or -1 if not found.
 */
int helper(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find square root of.
 *
 * Return: the natural square root of n or -1 if not found.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (helper(n, 0));
}
