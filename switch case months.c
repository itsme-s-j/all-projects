#include <stdio.h>
main ()
{ 
int A,a,D,d,F,f,J,j,M,m,N,n,O,o,S,s;
printf ("press 1 for months starting from A");
printf ("\npress 2 for months starting from D");
printf ("\npress 3 for months starting from F");
printf ("\npress 4 for months starting from J");
printf ("\npress 5 for months starting from M");
printf ("\npress 6 for months starting from N");
printf ("\npress 7 for months starting from O");
printf ("\npress 8 for months starting from S");
printf ("\nfurther, 1 for closest alphabetical month; 2 for next alphabetical month; and 3 for next to next alphabetical month");
printf ("\nA=");
scanf ("%d",&A);
switch(A)
   {
   case 1:
   printf("thank you for choosing A");
        printf("\na=");
        scanf ("%d",&a);
        switch(a)
        {
        	case 1:
        	printf("APRIL");
        	break;
        	case 2:
        	printf("AUGUST");
        	break;
        	case 3:
        	printf("NO MORE MONTHS FROM A");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 2:
   printf("thank you for choosing D");
   printf("\nd=");
        scanf ("%d",&d);
        switch(d)
        {
        	case 1:
        	printf("DECEMBER");
        	break;
        	case 2:
        	printf("NO MORE MONTHS FROM D");
        	break;
        	case 3:
        	printf("NO MORE MONTHS FROM D");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 3:
    printf("thank you for choosing F");
    printf("\nf=");
        scanf ("%d",&f);
        switch(f)
        {
        	case 1 :
        	printf("FEBRUARY");
        	break;
        	case 2 :
        	printf("NO MORE MONTHS FROM F");
        	break;
        	case 3 :
        	printf("NO MORE MONTHS FROM F");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 4:
   printf("thank you for choosing J");
   printf("\nj=");
        scanf ("%d",&j);
        switch(j)
        {
        	case 1:
        	printf("JANUARY");
        	break;
        	case 2:
        	printf("JULY");
        	break;
        	case 3:
        	printf("JUNE");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 5:
   printf("thank you for choosing M");
   printf("\nm=");
        scanf ("%d",&m);
        switch(m)
        {
        	case 1:
        	printf("MARCH");
        	break;
        	case 2:
        	printf("MAY");
        	break;
        	case 3:
        	printf("NO MORE MONTHS FROM M");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 6:
   printf("thank you for choosing N");
   printf("\nn=");
        scanf ("%d",&n);
        switch(n)
        {
        	case 1:
        	printf("NOVEMBER");
        	break;
        	case 2:
        	printf("NO MORE MONTHS FROM N");
        	break;
        	case 3:
        	printf("NO MORE MONTHS FROM N");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 7:
   printf("thank you for choosing O");
   printf("\no=");
        scanf ("%d",&o);
        switch(o)
        {
        	case 1:
        	printf("OCTOBER");
        	break;
        	case 2:
        	printf("NO MORE MONTHS FROM O");
        	break;
        	case 3:
        	printf("NO MORE MONTHS FROM O");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 8:
   printf("thank you for choosing S");
   printf("\ns=");
        scanf ("%d",&s);
        switch(s)
        {
        	case 1:
        	printf("SEPTEMBER");
        	break;
        	case 2:
        	printf("NO MORE MONTHS FROM S");
        	break;
        	case 3:
        	printf("NO MORE MONTHS FROM S");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   default:
   	 printf("invalid number");
   break;
   	
}

}