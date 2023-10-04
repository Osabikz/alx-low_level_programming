#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: first value
 * @av: second value
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, m = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[m] = av[i][n];
		m++;
	}
	if (str[m] == '\0')
	{
		str[m++] = '\n';
	}
	}
	return (str);
}
