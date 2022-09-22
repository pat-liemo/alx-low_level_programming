#include "main.h"

/**
 * string_toupper- changes lowercase to uppercase
 * @str: string to be changed
 * Return: address tp the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
