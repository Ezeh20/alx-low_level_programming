#include "main.h"
#include <stdio.h>
#include <srdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 *
 * @s1: str to concat
 * @s2: str to concat
 *
 * Return: a pointer to the new str on success or NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	char str;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;

	str = malloc(sizeof(char) * (k + l + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < k)
		{
			str[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (k + l))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}

