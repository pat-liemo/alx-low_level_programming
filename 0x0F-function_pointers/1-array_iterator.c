<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> d179d45 (My Tasks)
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
<<<<<<< HEAD
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
=======
 * on each element of an array.
 * @array: the array
 * @size: Size of the array
 * @action: Callback
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
>>>>>>> d179d45 (My Tasks)
}
