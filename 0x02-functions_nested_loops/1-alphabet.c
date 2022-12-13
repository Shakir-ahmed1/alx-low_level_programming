#include<stdio.h>
void print_alphabet(void);
/**
 * print_alphabet - prints alphabets in small letter
 */
void print_alphabet(void)
{	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	putchar('\n');
}
