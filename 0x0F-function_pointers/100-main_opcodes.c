#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc:argument counter
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *m_main = (char *) main;
	int i, number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;

	while (i < number_of_bytes)
	{
		printf("%.2hhx", m_main[i]);
		if (i < number_of_bytes - 1)
		{
			printf(" ");
		}
		i++;
	}
		printf("\n");
		return (0);
}
