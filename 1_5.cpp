#include <stdio.h>
#include <conio.h>

main(){
       int u;
       float c;
       printf("Enter the unit : ");
       scanf("%d",&u);
       if(u >21 && u <71){
       c = 180 + (u - 20)*6.5;
       }else if (u > 70) {
            c = 180 + (u - 70)*8.5;
       }else{
             c = 180;
             }
       printf("\nCharge is Rs : %f",c);
       getch(); 
}
