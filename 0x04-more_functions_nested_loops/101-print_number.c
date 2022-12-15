#include<stdio.h>
/**
 * print_number - prints a number using putchar
 * @n: the number to be printed
 */
void print_number(int n)
{
int i, j, k, num, l, number;
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
putchar('0' + (number / k));
number = number % k;
k /= 10;
}
putchar('0' + number % 10);
return (0);
}
