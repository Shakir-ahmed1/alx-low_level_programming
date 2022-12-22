#include "main.h"
/**
 * rot13 - it encodes the given string by using key = 13
 * @n: the address of string to be encoded
 * Return: the encoded string
 */
char *rot13(char *a)
{
        int i;

        for (i = 0; a[i] != '\0'; i++)
        {

                if (a[i] >= 'a' && a[i] <= 'z')
                {
                        a[i] = (((a[i] - 'a')+ 13) % 26) + 'a';
                }
        return (a);
}
}
