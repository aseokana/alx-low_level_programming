#include "main.h"

/**
 * _islower - Entry point
 * Description: check if input is lowercase
 * @c: The input to be checked.
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (c == abc)
		{
			return (1);
		}
	}
	return (0);
}
