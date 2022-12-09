#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	for (c = 0; c < 26; c++)
	{
		if (c + 97 != 101 && c + 97 != 113)
			putchar(c + 97);
		else
			continue;
	}
	putchar(10);
	return (0);
}
