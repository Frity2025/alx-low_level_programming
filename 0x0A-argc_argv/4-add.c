#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
  * main -adds positive numbers
  * @argc: number of command line arguments
  * @argv :array that contain the program command line arguments
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
		add = add + atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
