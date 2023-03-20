#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - get the length of a given string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len); len++)
		;
	return (len);
}

/**
 * _strcpy - copy give string
 * @src: source string
 *
 * Return: pointer to the copied string
 */
char *_strcpy(char *src)
{
	char *des;
	int i, s_len;

	s_len = _strlen(src);
	des = malloc((s_len + 1) * sizeof(char));
	if (des == NULL)
		return (NULL);
	for (i = 0; i <= s_len; i++)
		*(des + i) = *(src + i);
	return (des);
}

/**
 * free_mem - frees created memories
 * @d: pointer to dog type
 * @n: pointer to dog name
 * @w: pointer to do onwer
 *
 * Return: Nothing
 */
void free_mem(dog_t *d, char *n, char *w)
{
	if (d != NULL)
		free(d);
	if (n != NULL)
		free(n);
	if (w != NULL)
		free(w);
}

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *d_name, *d_owner;

	d_name = _strcpy(name);
	d_owner = _strcpy(owner);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL || d_name == NULL || d_owner == NULL)
	{
		free_mem(my_dog, d_name, d_owner);
		return (NULL);
	}
	my_dog->name = d_name;
	my_dog->age = age;
	my_dog->owner = d_owner;
	return (my_dog);
}
