#include <stdio.h>
main ()
{
	int x,y,z;
	printf ("x=");
	scanf  ("%d",&x);
	printf ("y=");
	scanf  ("%d",&y);
	printf ("z=");
	scanf  ("%d",&z);
	
	printf ("result=%d",(x*x) + (y*y)+ (z*z)+ (2*x*y)+ (2*y*z)+ (2*x*z));
	
	
}