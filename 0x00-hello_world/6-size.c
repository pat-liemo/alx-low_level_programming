#include <stdio.h>

/**
 *main- entrypoint
 *printf():prints to stdout
 *Return:0(success)
 */

int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of char: %zu byte\n", sizeof(char));
printf("Size of char: %zu bytes\n", sizeof(double));

return (0);
}

