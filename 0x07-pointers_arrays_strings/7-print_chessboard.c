#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - it prints two dimentional array with max column 8
 * @a: the character to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
