#include <stdio.h>
/**
*main - put char
*Description: prints alphabet
*Return: 0
*
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
};
putchar('\n');
return 0;
}
