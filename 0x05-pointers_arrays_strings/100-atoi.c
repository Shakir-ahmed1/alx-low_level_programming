#include "main.h"
/**
 * _atoi - it extracts number with it's sign
 * @s: the string to be extracted from
 * Return: integer with the extracted value
 */
int _atoi(char *s)
{

int i, num = 1,num2 = 1;
int control1, control2;

control1 = 1;
control2 = 1;

for (i = 0; s[i] != '\0' ; i++)
{
if (control1 == 1 && control2 == 1)
{
if (s[i] == '-')
{
num2 *= -1;
}
if (s[i] > 57 && s[i] < 48)
{
continue;
}
else if (s[i] <= 57 && s[i] >= 48)
{
control1 = 0;
num = ((int) s[i] - 48);
}
}
else if (control1 == 0 && control2 == 1)
{
if (s[i] <= 57 && s[i] >= 48)
{
num = num * 10 + ((int) s[i] - 48);
}
else
{
control2 = 0;
}
}
else
{
break;
}
}
return num * num2;
}

