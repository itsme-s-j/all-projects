#include <stdio.h>
main ()
{
int a,b,c;

printf ("a=");
scanf  ("%d",&a);
printf ("b=");
scanf  ("%d",&b);
printf ("c=");
scanf  ("%d",&c);

(a>b)?
      (a>c)?
       printf("a is greatest")
       :printf("c is greatest")
:(b>c)?
      printf("b is greatest")
      :printf("c is greatest");
}