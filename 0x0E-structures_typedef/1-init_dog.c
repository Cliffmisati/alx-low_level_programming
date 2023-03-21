#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = malloc(sizeof(char) * (_strlen(name) + 1));
    if (d->name == NULL)
        return;
    _strcpy(d->name, name);

    d->age = age;

    d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
    if (d->owner == NULL)
    {
        free(d->name);
        return;
    }
    _strcpy(d->owner, owner);
}

/**
 * _strlen - returns the length of a string
 * @s: string to find the length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 * _strcpy - copies a string to a buffer
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i]

