
#include <stdio.h>

/**
*main - Prints the alphabet in lowercase and then upercase followed by new line
*Return: always 0 (Sucess)
*/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);

return (0); }
