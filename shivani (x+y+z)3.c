#include <stdio.h>
main ()
{
	int x,y,z;
	printf ("x=");
	scanf  ("%d",&x);
	printf ("y=");
	scanf  ("%d",&y);
	printf ("z=",&z);
	scanf  ("%d",&z);
	
	printf ("result=%d",x*x*x + y*y*y + z*z*z + 3*(x+y)*(x+z)*(z+y));
	
	
}