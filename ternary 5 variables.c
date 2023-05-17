#include <stdio.h>
main ()
{
int a,b,c,d,e;

printf ("a=");
scanf  ("%d",&a);
printf ("b=");
scanf  ("%d",&b);
printf ("c=");
scanf  ("%d",&c);
printf ("d=");
scanf  ("%d",&d);
printf ("e=");
scanf  ("%d",&e);

(a>b)?
      (a>c)?
            (a>d)?
                 (a>e)?
                  printf("a is greatest")
                 :printf("e is greatest")
            :(d>e)?
			      printf("d is greatest")
                 :printf("e is greatest")      
            :(c>d)?
                   (c>e)?
                    printf("c is greatest")
                    :printf("e is greatest")
            :(d>e)?
			      printf("d is greatest")
                 :printf("e is greatest") 
           
:(b>c)?
        (b>d)?
              (b>e)?
              printf("b is greatest")
              :printf("e is greatest")
        :(d>e)?
			      printf("d is greatest")
                 :printf("e is greatest") 
:(c>d)?
        (c>e)?
          printf("c is greatest")
		  :printf("e is greatest")  
	:(d>e)?
			      printf("d is greatest")
                 :printf("e is greatest") ;	  
		  
		  
		  
}