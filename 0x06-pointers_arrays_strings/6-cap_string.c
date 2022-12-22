#include "main.h"
/**
 * cap_string - it capitalizes the given string
 * @a: the string
 * Return: a capitalized string
 */
char *cap_string(char *a)
{
int i, j;
char b[] = " \n\t,;.!\?\"(){}";

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; b[j] != '\0'; j++)
{
if (a[i] == b[j])
{
if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
{
a[i + 1] = a[i + 1] - 32;
}
}
}
}
return (a);
}
