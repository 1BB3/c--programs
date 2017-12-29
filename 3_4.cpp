#include <stdio.h>
#include <conio.h>

main(){
       int a,sum = 0;
       printf("Enter the integer : ");
       scanf("%d",&a);
       
       while (a>0){
             sum += a%10;
             a = a/10;
             }
       printf("\nThe sum of the digis is %d",sum);
       getch();
       }
