#include "main.h"
/**
 * _strcmp - Entry point
 * Description: compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: str
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
