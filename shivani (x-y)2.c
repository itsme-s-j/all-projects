#include <stdio.h>
main ()
{
	int x,y;
	printf ("x=");
	scanf  ("%d",&x);
	printf ("y=");
	scanf  ("%d",&y);
	
	printf ("result=%d",x*x + y*y - 2*x*y);
	
}
	