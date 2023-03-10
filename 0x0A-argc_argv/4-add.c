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
	int i, j, k, add = 0;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		add = add + atoi(argv[k]);
	}
	printf("%d\n", add);
	return (0);
}
