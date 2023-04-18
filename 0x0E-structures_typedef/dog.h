#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - initialize a dog struct
 * @d: pointer to the dog struct to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print a dog struct
 * @d: pointer to the dog struct to print
 *
 * Return: void
 */
void print_dog(struct dog *d);

/**
 * new_dog - create a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - free a dog struct
 * @d: pointer to the dog struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d);

/**
 * _strcpy - copy a string to a buffer
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src);

/**
 * _strlen - get the length of a string
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(const char *s);

#endif /* DOG_H */
