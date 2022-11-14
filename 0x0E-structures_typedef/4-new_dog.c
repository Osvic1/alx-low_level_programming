#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - new dog
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 *Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	bingo->name = strcpy(bingo->name, name);
	bingo->age = age;
	bingo->owner = strcpy(bingo->owner, owner);

	return (bingo);
}
