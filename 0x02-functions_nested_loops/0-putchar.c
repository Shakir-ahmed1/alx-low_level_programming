#include<stdio.h>
/**
 * main - prints _putchar
 *
 * Return:  Always 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < (int) sizeof(word) - 1; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
