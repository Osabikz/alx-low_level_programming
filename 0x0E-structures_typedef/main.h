#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
#endif
