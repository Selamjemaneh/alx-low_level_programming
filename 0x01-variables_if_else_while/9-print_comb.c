#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Numbers are separated by , and in ascending order, followed by a space
 * Return: Always 0 (Sucesss)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
