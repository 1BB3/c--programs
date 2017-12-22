//WAP to find the middle among 3
# include <stdio.h>
# include <conio.h>

main(){
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a > b){
		if (b > c){
			printf("%d is the middle number",b);
		}else {
			printf("%d is the middle number",c);
		}
	}else if (a < b) {
		  if (b < c){
		  	printf("%d is the middle number",b);
		  }else {
		  	printf("%d is the middle number",a);
		  }
	}
}
