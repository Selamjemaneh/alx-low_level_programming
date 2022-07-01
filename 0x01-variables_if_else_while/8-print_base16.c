#include<stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
