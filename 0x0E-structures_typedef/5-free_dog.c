#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free the memory allocated to dog's struct
 * @d: A pointer to the dog object or struct
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)

	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
