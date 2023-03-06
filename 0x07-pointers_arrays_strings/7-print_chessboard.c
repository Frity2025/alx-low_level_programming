#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * print_chessboard - prints chess board
 * @a: array
 *
 *
 *
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int i, j, m = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8 ; j++)
			if (i % 8 == 0 && i != 0)
			{
				m = i;
				_putchar('\n');
			}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
