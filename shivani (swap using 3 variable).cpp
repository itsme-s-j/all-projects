#include <stdio.h>
main ()
{
	int a,b,c;
	printf ("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b),
	c=a;
	a=b;
	b=c;
	
	printf ("a=%d",a);
    printf ("b=%d",b);
	}
