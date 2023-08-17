#include "main.h"
/**
 * main - shows 1 if the input is a
 * letter another cases shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: always 0.
 */
int main(void)
{
        int r;

        r = _isalpha('H');
        _putchar(r + '0');
         r = _isalpha('o');
         _putchar(r + '0');
         r = _isalpha(108);
         _putchar(r + '0');
         r = _isalpha(';');
         _putchar(r + '0');
         _putchar('\n');
        return (0);
}
