#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump searching algorithm implimentation
 * @array: the index to the first array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value if found, else return -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i, step, prev;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    prev = 0;
    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev += step;
        if (prev >= size)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
    i = prev - step;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }

    return (-1);
}
