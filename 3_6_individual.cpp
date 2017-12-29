#include <stdio.h>
#include <conio.h>

main(){
       int g,b,a,c = 0,count = 0,fd,sd;
       printf("Enter the integer : ");
       scanf("%d",&a);
       //printf("%d",a);
       b=a;
       g=a;
       
       while (a>0){ 
             fd = a%10;
                while ( b > 0){
                      sd = b%10;
                      if (fd == sd){count ++;/*a = b;*/}
                      b = b /10;
                      }
             a = a/10;
             printf("\nThe digit %d is repeated %d times",fd,count);
             count = 0;
             b = g;
             }
       getch();
       }
