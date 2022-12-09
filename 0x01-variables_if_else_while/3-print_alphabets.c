#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOP\
		QRSTUVWXYZ\n";
	int count;

	for (count = 0; count <= 42; count++)
	{
		putchar(alphabet[count]);
	}
	return (0);
}
