#include "main.h"

/**
* main - prints alphabets in lowercase,followed by new line
* 
* return: void
* */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putcher(letter);
letter++;
}
_putcher('\n');
}
