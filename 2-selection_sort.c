#include "sort.h"

/**
 * swap - swap values
 * @a: value a
 * @b: value b
 */
void swap(int *a, int *b)
{
	int tmp = *b;

	*b = *a;
	*a = tmp;
	b++;
}
/**
 * selection_sort - selection_sort
 * @array: array to sorting
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, x, index = 0;

	if (size >= 2)
	{
		while (index < size)
		{
			for (i = index; i < size; i++)
			{
				if (array[i] < array[index])
				{
					swap(&array[i], &array[index]);
					for (x = 0; x < size; x++)
					{
					printf("%d", array[x]);
					if (x != size - 1)
					{
						putchar(',');
						putchar(' ');
					}
					}
					putchar('\n');
				}
			}
			index++;
		}
	}
}
