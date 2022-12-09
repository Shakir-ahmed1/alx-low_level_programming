#include<stdio.h>
/**
 * main - it prints a two digit number combination
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num1,num2;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (!(num1 == 56 && num2 == 57))
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					continue;
				}
			}
		}
	}
	return (0);
}
