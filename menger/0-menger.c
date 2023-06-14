#include "menger.h"

/**
 * menger - function that draws a 2D Menger Sponge.
 * @level: is the level of the Menger Sponge to draw.
*/
void menger(int level)
{
	int rows, columns, width, height, size;
	char character_to_draw;

	size = pow(3, level);
	rows = 0;
	while (rows < size)
	{
		columns = 0;
		while (columns < size)
		{
			character_to_draw = '#';
			height = rows;
			width = columns;
			while (height > 0)
			{
				if (height % 3 == 1 && width % 3 == 1)
					character_to_draw = ' ';
				height /= 3;
				width /= 3;
			}
			printf("%c", character_to_draw);
			columns++;
		}

		printf("\n");
		rows++;
	}
}
