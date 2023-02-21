#include "main.h"

/**
 * _islower - Entry point
 * Description: check if input is lowercase
 * Return: void
 */

int _islower(int c)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (c == abc)
		{
			return(1);
		}
	}
	return(0);
}
