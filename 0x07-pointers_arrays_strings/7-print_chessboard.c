#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int p;

	for (c = 0; c < 8; c++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[c][p]);
		_putchar('\n');
	}
}
