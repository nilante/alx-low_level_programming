#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d:the pointer
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
d->name = "(chelsea)";
if (d->owner == NULL)
d->owner = "(sam)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
