#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat  - concatenates two strings.
 * @s1:first string
 * @s2:second string
 * @n:size of bytes
 * Return: pointer shall point to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;

	unsigned int i, j, k, l;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	k = i + n;
	s3 = malloc((k + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
	{
		s3[l] = s1[l];
	}
	for (; l < k; l++)
	{
		s3[l] = s2[l - i];
	}
	s3[l] = '\0';
	return (s3);
}
