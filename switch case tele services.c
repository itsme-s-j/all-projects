#include <stdio.h>
main ()
{ 
int a,b,c,d;
printf ("press 1 for gujarati");
printf ("\npress 2 for english");
printf ("\npress 3 for hindi");
printf ("\nfurther, 1 for male; 2 for female; and 3 for any");
printf ("\na=");
scanf ("%d",&a);
switch(a)
   {
   case 1:
   printf("thank you for choosing gujarati");
        printf("\nb=");
        scanf ("%d",&b);
        switch(b)
        {
        	case 1:
        	printf("you will be talking to a male employee");
        	break;
        	case 2:
        	printf("you will be talking to a female employee");
        	break;
        	case 3:
        	printf("you will be talking to any employee");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 2:
   printf("thank you for choosing english");
   printf("\nc=");
        scanf ("%d",&c);
        switch(c)
        {
        	case 1:
        	printf("you will be talking to a male employee");
        	break;
        	case 2:
        	printf("you will be talking to a female employee");
        	break;
        	case 3:
        	printf("you will be talking to any employee");
        	break;
        	default:
        	printf("invalid number");
		}
   break;
   case 3:
    printf("thank you for choosing hindi");
    printf("\nd=");
        scanf ("%d",&d);
        switch(d)
        {
        	case 1 :
        	printf("you will be talking to a male employee");
        	break;
        	case 2 :
        	printf("you will be talking to a female employee");
        	break;
        	case 3 :
        	printf("you will be talking to any employee");
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