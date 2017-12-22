#include <stdio.h>
#include <conio.h>
main(){
       float i,t,tr,p,r;
       
       printf("Enter principle amount : ");
       scanf("%f",&p);
       
       printf("Enter time (in years) : ");
       scanf("%f",&t);
       
       printf("Enter rate (in percentage) : ");
       scanf("%f",&tr);
       
       r = tr/100;
       i = p*t*r/100;
            
       printf("The interest is Rs.%f",i);
       getch();
           
}
