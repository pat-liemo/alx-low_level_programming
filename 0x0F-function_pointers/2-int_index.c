<<<<<<< HEAD
#include "funtion_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
=======
#include <stdio.h>

/**
 * int_index - searces for an integer
 * @array: The array
 * @size: The array size
 * @cmp: Comparator callback
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	index = -1;
	if (array != NULL && cmp != NULL)
>>>>>>> d179d45 (My Tasks)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
<<<<<<< HEAD
				return (i);
		}
	}

	return (-1);
=======
			{
				index = i;
				break;
			}
		}
	}
	return (index);
>>>>>>> d179d45 (My Tasks)
}
