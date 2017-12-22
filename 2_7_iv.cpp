//WAP to display 1 1 2 3 5 8 ..... n terms
# include <stdio.h>

main(){
	int a;
	printf("How many terms : ");
	scanf("%d",&a);
	int b = 1,c = 1,d;
	printf("%d\t",b);
	for (int i = 0;i < a-1;i++){
		printf("%d\t",c);
		d = b + c;
		b = c;
		c = d;
		
	}
}
