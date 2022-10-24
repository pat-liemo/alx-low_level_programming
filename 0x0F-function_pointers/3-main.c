#include "3-calc.h"

/**
<<<<<<< HEAD
 * main - program that perfoms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

=======
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
>>>>>>> d179d45 (My Tasks)
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

<<<<<<< HEAD
	if ((0 == '/' || 0 == '%') && arg2 == 0)
=======
	if ((o == '/' || o == '%') && arg2 == 0)
>>>>>>> d179d45 (My Tasks)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
