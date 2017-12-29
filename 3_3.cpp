#include <stdio.h>
#include <conio.h>

main(){
       int a,b, c = 0;
       printf("Enter the starting integer : ");
       scanf("%d",&a); 
       printf("Enter the ending integer : ");
       scanf("%d",&b);
       
       while (a >= b){
             printf("%d\t",a);
             a = a - 3;
             } 
       getch();
       }
