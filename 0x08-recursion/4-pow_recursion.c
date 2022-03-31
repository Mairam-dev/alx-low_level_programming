#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: la base.
 * @y: el exponente.
 * Return: numero.
 */

int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	n = (x * _pow_recursion(x, y - 1));
	return (n);
}
