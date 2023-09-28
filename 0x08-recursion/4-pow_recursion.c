#include "main.h"

/**
 * _pow_recursion - functions that returns the value of x raised power of y
 * @x: first value
 * @y: second value
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
