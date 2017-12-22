#include <stdio.h>
#include <conio.h>
main(){
       int am,ep,em,bee,ed,cp,total;
       float per;
       char *result[9];
       
       printf("Enter Marks in Applied Mechanics : ");
       scanf("%d",&am);
       
       printf("Enter Marks in Engineering Physics : ");
       scanf("%d",&ep);
       
       printf("Enter Marks in Engineering Mathematics : ");
       scanf("%d",&em);
       
       printf("Enter Marks in Basic Electrical Engineering : ");
       scanf("%d",&bee);
       
       printf("Enter Marks in Engineering Drawing : ");
       scanf("%d",&ed);
       
       printf("Enter Marks in Computer Programming : ");
       scanf("%d",&cp);
       
       total = am + ep + em + bee + ed +cp;
       
       per = total/6;
       
       if(am<35 || ep<35 || em<35 || bee<35 || ed<35 || cp<35){
                 *result = "Fail";
                 }else if (per > 79){
                         *result = "Dist";
                         }else if (per > 59){
                                 *result = "1stDiv";
                                 }else if(per > 39){
                                             *result = "2ndDiv";
                                             }else if(per > 34){
                                                         *result = "3rdDiv";
                                                         }else{
                                                               *result = "Fail";
                                                               }
       printf("\n\nTotal Marks : %d",total);
       printf("\nPercentage : %f%",per);                                                                                                                       
       printf("\nResult : %s",*result);
       getch();
       
}
