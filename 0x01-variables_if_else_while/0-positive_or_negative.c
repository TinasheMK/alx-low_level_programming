#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* 
**main - void
**Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
    {
        printf("is positive");
    }
if(n<0)
    {
        printf("is negative");
    }
return (0);
}
