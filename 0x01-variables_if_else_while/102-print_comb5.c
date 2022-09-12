#include <stdio>
/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int nl = 0, n2;

	while (nl <= 99)
	{
		n2 = nl;
		while (n2 <= 99)
		{
			if (n2 != nl)
			{
				putchar((nl / 10) + 48);
				putchar((nl % 10) + 48);
				putchar(' ');
				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);

				if (nl != 98 || n2 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++n2;
		}
		++nl;
	}
	putchar('\n');
	return (0);
}
