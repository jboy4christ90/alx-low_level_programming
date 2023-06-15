#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a line to the standard error
 *
 * Return: Always 0 (success)
 */
int main(void)
{
write(2, "and that place of art is useful\* - Dora korpar, -2015-10-19\n",
sizeof("and that place of art is useful\* - Dora korpar, 2015-10-19"));
return (1);
}

