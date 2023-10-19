#include "lists.h"
void ComeFristbyCTC(void)__attribute__((constructor));
void ComeFristbyCTC(void);
/**
 * ComeFristbyCTC - function that runs before the main function
 */
void ComeFristbyCTC(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
