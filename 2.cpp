#include <stdio.h>
#include <conio.h>
main(){
       int a,b,c;
       printf("Enter two numbers : ");
       scanf("%d%d",&a,&b);
       c=a;
       a=b;
       b=c;     
       printf("The numbers after swapping are : %d%d",a,b);
       getch();
              
}
