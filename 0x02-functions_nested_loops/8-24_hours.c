#include "main.h"

/**
 * jack_bauer - Prints time
 * @H, @h, @M, @m: Displays time
 *
 * Return: No value to return
 */
void jack_bauer(void)
{
	int H, h, M, m;

	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 9; h++)
		{
			if ((H <= 1 && h <= 9) || (H <= 2 && h <= 3))
			{
				for (M = 0; M <= 5; M++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(H + '0');
						_putchar(h + '0');
						_putchar(58);
						_putchar(M + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
