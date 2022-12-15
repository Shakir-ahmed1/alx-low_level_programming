#include "main.h"
/**
 * print_number - prints a number using putchar
 * @n: the number to be printed
 */
void print_number(int n)
{
int i, k, num, number;

number = n;
k = 1;
if (number < 0)
{
	number = number * -1;
	_putchar('-');
}
num = number;
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
