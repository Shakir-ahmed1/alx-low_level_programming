#include<stdio.h>
/**
 * main - prints all combinations of two two-digit numbers
 *
 * Return: 0 , successfull
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			for (num3 = 48; num3 < 58; num3++)
			{
				for (num4 = 48; num4 < 58; num4++)
				{
					if ((num1 * 10) + num2 < (num3 * 10) + num4)
					{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (!(num1 + num2 == 56 + 57 && num3 + num4 == 57 + 57))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
