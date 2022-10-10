#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that returns the len of
 * a string
 * @s: the string
 *
 * Return: the len of @s
 */

int _strlen(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *_strcpy - a function that copies the string pointed to by src
 * including the null byte (terminating) to the buffer pointed to dest
 * @dest: pointer to the buffer
 * @src: str to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - a function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
