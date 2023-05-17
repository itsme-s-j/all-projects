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

if(a>b)
        {
	    if(a>c)
	        {
	        	if(a>d)
	        	{printf("a is greatest");}
	        	else {printf ("d is greatest");}
			}
		else
		{
			if(c>d)
			{printf("c is greatest");}
			else
			{printf("d is greatest");}
			
		}
             
        } 
else 
 {
   if(b>c)
      {
      	if(b>d)
	           {printf("b is greatest");}
	       else{printf("d is greatest");}
      } 
      else
	  {
	  if(c>d)
	         {printf("c is greatest");}
	  else{ printf("d is greatest");}
	         
	  
      }
  }
}