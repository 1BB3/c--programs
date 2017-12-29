#include <stdio.h>
#include <conio.h>

main(){
       int a,c = 0;
       printf("Enter the integer : ");
       scanf("%d",&a);
       
       while (a>0){
             a = a/10;
              c ++;
             }
       printf("\nThe number of digis is %d",c);
       getch();
       }
