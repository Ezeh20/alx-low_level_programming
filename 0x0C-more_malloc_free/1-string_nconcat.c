#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: str 1
 * @s2: str 2
 * @n: number of bytes 
 *
 * Return: return NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k =0;
	unsigned int l = 0;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;

	if (n < l)
		str = malloc(sizeof(char) * (k + n + 1));
	else 
		str = malloc(sizeof(char) * (k + l + 1));

	if (!str)
		return (NULL);

	while (i < k)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < l && i < (k + n))
		str[i++] = s2[j++];

	while (n >= l && i < (k + l))
		str[i++] = s2[j++];
	str[i] = '\0';

	return (str);
}
