#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ki;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ki = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ki] != '\0')
		ki++;
	conct = malloc(sizeof(char) * (i + ki + 1));

	if (conct == NULL)
		return (NULL);
	i = ki = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ki] != '\0')
	{
		conct[i] = s2[ki];
		i++, ki++;
	}
	conct[i] = '\0';
	return (conct);
}
