#include<stdio.h>
#include<stdlib.h>
/**
  * main -prints its name followed by a new line
  * @argc: number of command line arguments
  * @argv :array that contain the program command line arguments
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int a, b, mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
