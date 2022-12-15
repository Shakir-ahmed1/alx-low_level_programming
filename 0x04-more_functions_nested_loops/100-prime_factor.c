#include<stdio.h>
/**
 * is_prime - checks if the given number is a prime
 * @num: the number to be checked
 * Return: 1 if the number is a prime 0 if the number is not a prime
 */
int is_prime(long long int num)
{
long long int i;

for (i = 2; i < num; i++)
{
if (num % i == 0)
{
return (0);
}
}
return (1);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
long long int i, number;

number = 612852475143;
i = 2;

while (is_prime(number) != 1)
{
if (number % i == 0)
{
if (is_prime(i))
{
number = number / i;
i = 2;
}
}
i++;
}
printf("%lld\n", number);
return (0);
}
