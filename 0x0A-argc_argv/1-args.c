#include<stdio.h>
/**
  * main -prints the number of argument passed to it.
  * @argc: number of command line arguments
  * @argv :array that contain the program command line arguments
  * Return: Always 0.
  */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
