#include "main.h"
/**
 * print_number - prints a number using putchar
 * @n: the number to be printed
 */
void print_number(int n)
{
int i, k, j, num, number;

if (number < 0)
{
	j = -1;
	number = number * -1;
	_putchar('-');
}

	
number = n;
num = number;
k = 1;
while (num > 9)
{
k *= 10;
num /= 10;
}
for (i = 0; k != 1; i++)
{
_putchar('0' + (number / k));
number = number % k;
k /= 10;
}
_putchar('0' + number % 10);
}
