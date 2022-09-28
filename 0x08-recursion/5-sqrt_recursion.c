#include "main.h"

/**
 * is_square_root- entry point
 * description- function that confirms the natural
 * *@num: function accepts an input saved into num
 * *@squared: accepts input saved into squared
 * Return: success (integer)
 */

int is_square_root(int num, int squared)
{
	if ((squared * squared) == num)
	{
		return (squared);
	}
	else if (squared == num / 2)
	{
		return (-1);
	}
	return (is_square_root(num, squared + 1));
}

/**
 * _sqrt_recursion- entry point
 * @n: accepts an input saved into n
 * Return: success (integer)
 */

int _sqrt_recursion(int n)
{
	int squared = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (is_square_root(n, squared));
}
