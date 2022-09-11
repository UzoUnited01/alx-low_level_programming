#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int nl = 0, n2, n3;

	while (nl <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			n3 = 0;
			while (n3 <= 9)
			{
				if (nl != n2 && nl < n2 && n2 != n3 && n2 < n3)
				{
					putchar(nl + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);

					if (nl + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++n3;
			}
			++n2;
		}
		++nl;
	}
	putchar('\n');
	return (0);
}
