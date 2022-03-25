#include "main.h"

/**
 *rot13 - encoder rot13
 *@str: pointer to string param
 *
 *Description: encodes a string using rot13
 *Return: always (0)
 */
char *rot13(char *)
{
int i;
int j;
char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j <= 51; j++)
{
if (s[j] == str[i])
{
str[i] = s1[j];

}
}
}
return (str);
}
