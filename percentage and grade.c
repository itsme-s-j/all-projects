#include <stdio.h>
main ()
{
int a,b,c,d,e,P;

printf  ("a= marks obtained in physics");
printf  ("\nb= marks obtained in chemistry");
printf  ("\nc= marks obtained in biology");
printf  ("\nd= marks obtained in maths");
printf  ("\ne= marks obtained in computer");
printf ("\na=");
scanf  ("%d",&a);
printf ("\nb=");
scanf  ("%d",&b);
printf ("\nc=");
scanf  ("%d",&c);
printf ("\nd=");
scanf  ("%d",&d);
printf ("\ne=");
scanf  ("%d",&e);
 
printf (" P= percentage obtained = %d",(a+b+c+d+e)/5);
 
(P>=40 && P<50)?
        printf ("\n GRADE = F")
 :(P>=50 && P<60)?  
        printf ("\n GRADE = E") 
:(P>=60 && P<70)?
        printf ("\n GRADE = D")
:(P>=70 && P<80)?
        printf ("\nGRADE = C")
:(P>=80 && P<90)?
        printf ("\n GRADE = B")
    : 
        printf ("\nGRADE = A");		 
		
		
	}