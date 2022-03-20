#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int s;
s = 122;
while (s >= 97)
{
putchar(s);
s--;
}
putchar('\n');
return (0);
}
