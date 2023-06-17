#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  assign a random number to the variable n each time it is executed
 *  it executes , and print it
 *  return 0
 */

int main (void)
{
        int n;
}

        srand(time(0));
        n = rand() - RAND_MAX / 2 ;

        printf("the number : %d\n" , n);
        if ( n > 0 )
        {
                printf("%d is positive\n" ,n );
        }
        else if ( n == 0 )
        {
                printf("%d is zero\n" ,n );
        }
        else if ( n < 0 )
        {
                printf("%d is negative\n" , n );
        }
        printf("\n") ;
