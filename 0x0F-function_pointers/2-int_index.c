#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool y;

	if (array != NULL && size > 0 &&  cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if (y == TRUE)
			{
				return (index);
			}
		}
	}

	return (-1);
}
