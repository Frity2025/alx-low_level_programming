#include<stdlib.h>
#include<stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name:parameter
 * @f: pointer function passed
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		if (f)
		{

			f(name);
		}
	}
}
