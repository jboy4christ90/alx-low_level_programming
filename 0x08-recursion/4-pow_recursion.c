#include "main.h"

/**
 * _pow_recursion - Function that return the value of x raised to the power of y
 * @x: value to raise
 * @y: power 
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
