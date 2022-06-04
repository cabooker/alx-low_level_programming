#include <stdio.h>

/**
*main - Prints the alphabet in lowercase except q and e
*Return: always 0 
*/
int main(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'q' && ch != 'e')
        putchar(ch);
    }
   
    putchar(10);

return (0);
}