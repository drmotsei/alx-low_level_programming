/*
 * File: 7-print_chessboard.c
 * Auth: not
 */
#include "main.h"
/**
 * print_chessboard - Entry
 * @a: Chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[1][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
