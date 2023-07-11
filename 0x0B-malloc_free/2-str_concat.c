#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j;
	int len1, len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		result[i] = s2[j];
		i++;
	}

	result[i] = '\0';
	return (result);

}
