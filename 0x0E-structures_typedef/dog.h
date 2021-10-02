#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * init_dog: Initializes the dog variable
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
