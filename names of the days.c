#include <stdio.h>
main ()
{ 
int A,F,M,S,s,T,t,W;
printf ("press 1 for days starting from F");
printf ("\npress 2 for days starting from M");
printf ("\npress 3 for days starting from S");
printf ("\npress 4 for days starting from s");
printf ("\npress 5 for days starting from T");
printf ("\npress 6 for days starting from t");
printf ("\npress 7 for days starting from W");

printf ("\n A=");
scanf ("%d",&A);
switch(A)
   
        {
        	case 1:
        	printf("FRIDAY");
        	break;
        	case 2:
        	printf("MONDAY");
        	break;
        	case 3:
        	printf("SATURDAY");
        	break;
        	case 4:
        	printf("SUNDAY");
        	break;
        	case 5:
        	printf("TUESDAY");
        	break;
        	case 6:
        	printf("THURSDAY");
        	break;
        	case 7:
        	printf("WEDNESDAY");
        	break;
        	default:
        	printf("invalid number");
		}
  
   
}

