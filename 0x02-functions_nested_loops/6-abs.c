#include "main.h"

/**
 * _abs - Entry point
 * Description: computes the absolute value of an integer.
 * @n: The input to be checked.
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
