#include "main.h"

/**
 * _strpbrk - function taht searches a string or any of a set
 * @s: first value
 * @accept: second value
 * Return: accep or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
