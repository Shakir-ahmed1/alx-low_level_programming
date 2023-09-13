#include "search_algos.h"
int recurs_binary(int *array, size_t size, int value, size_t l, size_t r);
void print_array(int *array, size_t size);
/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);
    return (recurs_binary(array, size, value, 0, size - 1));
}

/**
 * recurs_binary - Helper function that uses recursion to perform binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * @l: Left index of the subarray
 * @r: Right index of the subarray
 * Return: Index where value is located, or -1 if not found
 */
int recurs_binary(int *array, size_t size, int value, size_t l, size_t r)
{
    size_t m;

    if (l > r)
        return (-1);

    printf("Searching in array: ");
    print_array(array + l, r - l + 1);
    m = (l + r) / 2;
    if (array[m] == value)
    {
        if (m == l || array[m - 1] != value)
            return (m);
        else
            return (recurs_binary(array, size, value, l, m));
    }
    else if (array[m] > value)
        return (recurs_binary(array, size, value, l, m - 1));
    else
        return (recurs_binary(array, size, value, m + 1, r));
}

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array to print
 * @size: Number of elements in array
 */
void print_array(int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}

