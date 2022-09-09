

#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/* 

**main - void

**Return: 0

*/

int main(void)

{

README.md int n;

README.md srand(time(0));

README.md n = rand() - RAND_MAX / 2;

README.md if(n>0)

    {

        printf ("is positive")

    }

README.md if(n<0)

    {

        printf ("is negative")

    }

README.md return (0);

}


