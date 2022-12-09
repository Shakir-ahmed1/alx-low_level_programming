#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int count;

	for (count = 0; count <= 52; count++)
	{
		putchar(alphabet[count]);
	}
	return (0);
}
