#include "sort.h"
/**
* cambio: change value
* @a: pointer
* @b: pointer
*/

void cambio(int *a, int *b)
{
    int tmp = *b;
    
    *b = *a;
    *a = tmp;
}
/**
* bubble_sort - bubble sort
* @array: array
* @size: size
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j, x;
    {
        for (i = 0; i < size; i++)
        {    
            for (j = 0; j < size; j++)
            {
                if (array[j] > array[j + 1])
                {
                    cambio(&array[j], &array[j + 1]);
                    for (x = 0; x < size; x++)
                    {
                    printf("%d", array[x]);
                    if (x !=  size - 1)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                    }
                    putchar('\n');
                }
            }
        }
    }
}