#include <stdio.h>
#include "main.h"

/**
 * main - program tht prin its name
 * @argc: number or argument
 * @argv: array of argument
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
