#include<stdio.h>
#include<stdlib.h>
/**
  * main -multiply two number
  * @argc: number of command line arguments
  * @argv :array that contain the program command line arguments
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int a, b, mul;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", mul);
	return (0);
}
