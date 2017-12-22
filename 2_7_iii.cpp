//WAP to display 1 2 5 10 17 ...... to n terms
# include <stdio.h>

main(){
	int a;
	printf("How many terms : ");
	scanf("%d",&a);
	int b = 1,c = 1;
	for (int i = 0;i < a;i++){
		printf("%d\t",b);
		b = b + c;
		c = c + 2;
	}
}
