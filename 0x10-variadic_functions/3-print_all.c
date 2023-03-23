#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include <stdbool.h>
/**
 * print_all- prints anything
 * @format:list of argument passed
 * Return:nothing
 */
void print_all(const char * const format, ...)
{
	int i;

	char *str;

	va_list op;

	va_start(op, format);

	if (format)
	{
		i = 0;

		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(op, int));
					break;
				case 'i':
					printf("%d", va_arg(op, int));
					break;
				case 'f':
					printf("%f", va_arg(op, double));
					break;
				case 's':
					str = va_arg(op, char*);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
			}
			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(op);
}
