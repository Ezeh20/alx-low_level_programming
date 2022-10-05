#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup -  a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: a duplicate of the string that returns a pointer
 * to a new string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ch;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j])
		j++;

	ch = malloc(sizeof(char) * (j + 1));

	if (ch == NULL)
		return (NULL);

	while ((ch[i] = str[i]) != '\0')
		i++;
	return (ch);
}
