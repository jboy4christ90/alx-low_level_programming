#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: the number to calculate the factorial
 *
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
