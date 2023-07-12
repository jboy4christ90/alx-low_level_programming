#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: te string to be duplicated
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[1])
	{
		i++;
	}

	s = malloc((sizeof(char) *i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < 1)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
