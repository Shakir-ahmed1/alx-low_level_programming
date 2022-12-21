#include "main.h"
/**
 * reverse_array - it reverses the squence of the int array
 * @a: the address of the array
 * @n: the length of the array
 */
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
