#include <stdio.h>
main ()
{
	int x,y;
	printf ("x=");
	scanf  ("%d",&x);
	printf ("y=");
	scanf  ("%d",&y);
	
	printf ("result=%d",x*x*x + y*y*y + 3*x*y*x + 3*y*y*x);
	
	
}