#include <stdio.h>
main ()
{
int a,b,c,d;

printf ("a=");
scanf  ("%d",&a);
printf ("b=");
scanf  ("%d",&b);
printf ("c=");
scanf  ("%d",&c);
printf ("d=");
scanf  ("%d",&d);

(a>b)?
      (a>c)?
            (a>d)?
                  printf("a is greatest")
                :printf("d is greatest")
           :(c>d)?
           printf("c is greatest")
           :printf ("d is greatest")   
:(b>c)?
        (b>d)?
              printf("b is greatest")
              :printf("d is greatest")
   :(c>d)?
          printf("c is greatest")
		  :printf("d is greatest")  ; 
}