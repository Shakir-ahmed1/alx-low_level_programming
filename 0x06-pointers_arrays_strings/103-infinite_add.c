#include "main.h"
/**
 * _strlen - it counts the size of the string
 * @st: the address of the string
 * Return: the length of the given char
 */
int _strlen(char *st)
{
int i;

for (i = 0; st[i] != '\0'; i++)
{
continue;
}
return (i);
}
/**
 * filler - it fills 0 to the string untill it gets the desired length
 * @st: the address of the string
 * @len: the length of the max string
 * Return: the length of the given char
 */
char *filler(char *st, int len)
{
int i, l;
char *pt;
pt = st;
l = _strlen(st);
for (i = 0; i < len; i++)
{
if (i < len - l)
{
pt[i] = '0';
}
else
{
pt[i] = st[i - len + l];
}
}
pt[i] = '\0';
return (pt);
}

/**
 * infinite_add - it adds two large numbers
 * @n1: first number
 * @n2: second number
 * @r: result for string
 * @size_r: the size of r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, c, length, l1, l2;

l1 = _strlen(n1);
l2 = _strlen(n2);

length = l1;
if (l2 > l1)
{
length = l2;
}
if (l1 > size_r || l2 > size_r)
{
return (0);
}
for (i = 0; i < size_r; i++)
{
r[i] = ' ';
}
c = 0;
n1 = filler(n1, size_r);
n2 = filler(n2, size_r);
for (i = 0; i < size_r; i++)
{
r[size_r - i] =(((n1[l1 - i] - '0') + (n2[l2 - i] - '0') + c) % 10) + '0';
if ((((n1[l1 - i] - '0') + (n2[l2 - i] - '0') + c) % 10) >= 10)
{
c = 1;
}
else
{
c = 0;
}
}
if (size_r > length && c == 1)
{
r[size_r - i] = '1';
}
else if (size_r == length && c == 1)
{
return (0);
}
return (r);
}
