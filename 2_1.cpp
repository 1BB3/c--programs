//WAP to find the largest among 4
# include <stdio.h>
# include <conio.h>

main(){
	int a,b,c,d;
	printf("Enter 4 numbers : \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if (a > b){
		if (a > c){
			if (a > d){
				printf("%d is the greatest",a);
			}else{
				printf("%d is the greatest",d);
			}
		}else if (c > d){
			printf("%d is the greatest",c);
		}else{
			printf("%d is the greatest",d);
		}
	}else{
		if (b > c){
			if (b > d){
				printf("%d is the greatest",b);
			}else {
				printf("%d is the greatest",d);
			}
		}else if (c > d){
			printf("%d is the greatest",c);
		}else {
			printf("%d is the greatest",d);
		}
	}
	
	getch(); 
}
