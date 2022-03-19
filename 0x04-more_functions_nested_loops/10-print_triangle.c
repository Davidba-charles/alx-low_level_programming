#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int x;
int i;
int spaces;
;
for (i = 0; i < size; i++)
{
for (spaces = size - 1 - i; spaces > 0; spaces--)
{
_putchar(' ');
}
for (x = 0; x <= i; x++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
