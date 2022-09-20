#include "main.h"

/**
* puts_half - prints half of a string
* @str: string
* Return: void
*/

void puts_half(char *str)
{
int i, n,len;

i = 0;
while (str[i] != '\0')
{
i++;
}
len = i;
n = len / 2;
while (n<= len)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
