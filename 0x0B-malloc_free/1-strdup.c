#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that return a pointer to a new string
 * @str: function parameters
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *a;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		a[k] = str[k];

	return (a);
}
