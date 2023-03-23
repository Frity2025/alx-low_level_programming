#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
/**
 * print_strings- prints numbers, followed by a new line.
 * @separator:string to be printed between numbers
 * @n:number of integers passed to the function
 * Return:nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;

	unsigned int i;

	char *ch;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(op, char*);

		if (ch)
			printf("%s", ch);
		else
			printf("(nil)");
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(op);
}
