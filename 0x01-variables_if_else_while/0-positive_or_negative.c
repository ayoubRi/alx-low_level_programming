#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**assign a random number to the variable n each time it is executed */

int main (void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2
		
		printf("the number : %d\n" , n);
	if ( n > 0 )
	{
		printf("is positive\n");
	}
	else if ( n == 0 )
	{
		printf("is zero\n");
	}
	else ( n < 0 ) 
	{
		printf("is negative\n");
	}
	printf("\n")
		return 0 ;
