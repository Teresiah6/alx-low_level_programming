#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: dog
 * return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
