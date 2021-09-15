#include "main.h"

/**
 *  _pow_recursion - a recursive function that returns the value of "power"
 *  @x: value of the number to be powered ;)
 *  @y: what we are powering x by
 *  Return: returns -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
