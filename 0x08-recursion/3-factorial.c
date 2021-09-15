#include "main.h"

/**
 * factorial - function that returns itself
 * @n: this the where the factorial is stored
 *Return: returns the factorial of the given number
 */

int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}
