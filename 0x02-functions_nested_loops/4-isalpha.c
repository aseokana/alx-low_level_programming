#include "main.h"

/**
 * _isalpha - Entry point
 * Description: check if input is an alphabet
 * @c: The input to be checked.
 * Return: 1 if input is an alphabet, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
