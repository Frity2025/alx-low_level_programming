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
	char *p;
	unsigned int s1_size = 0, s2_size = 0, i;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[s1_size] != '\0')
	{
		s1_size++;
	}

	while (s2[s2_size] != '\0')
	{
		s2_size++;
	}

	if (n > s2_size)
	n = s2_size;
	p = malloc((s1_size + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < s1_size; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (s1_size + n); i++)
	{
		p[i] = s2[i - s1_size];
	}
	p[i] = '\0';

return (p);
}
