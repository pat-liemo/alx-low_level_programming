#include "3-calc.h"

/**
<<<<<<< HEAD
 * get_op_func - function pointer that selects correct function to perform
 * @s: operator given by user
 *
 * Return: pointer to the function that corresponds to operator
 */

=======
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
>>>>>>> d179d45 (My Tasks)
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
<<<<<<< HEAD
			return (ops[i], f);
=======
			return (ops[i].f);
>>>>>>> d179d45 (My Tasks)
		i++;
	}

	return (NULL);
}
