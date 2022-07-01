#include <stdio.h>

/**
 *main -  prints all possible different combinations of two digits
 *Numbers are  separated by ,, followed by a space
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
