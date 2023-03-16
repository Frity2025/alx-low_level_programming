#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b:in bytes
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{

	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
