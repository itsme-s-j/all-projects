#include <stdio.h>
 main ()
{
	 int x;
	 printf (" enter the value of number whose table is to be printed\n");
	 scanf ("%d", &x);
	 for ( int i = 0; i <= 10 ; i++)
    {
    	printf ("%d X %d = %d\n", x, i, i*x);
	}	
	
	return 0;
	
	
}