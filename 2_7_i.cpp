//WAP to display 0 1 2 3 .... to n
# include <stdio.h>

main(){
	int a;
	printf("How many terms : ");
	scanf("%d",&a);
	
	for (int i = 0;i < a;i++){
		printf("%d\t",i);
	}
}
