<<<<<<< HEAD
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to printing functiom
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
=======
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
>>>>>>> d179d45 (My Tasks)
}
