#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");
	return (0);
}
