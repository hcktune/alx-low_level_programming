#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - diplay the properties of the dog
 * @d: dog's struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->age : "(nil)");
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
