#include <stdio.h>

main(){
	int n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	int x[n],sum = 0;
	
	printf("\n\nEnter %d numbers\n",n);
	for(int i = 0; i < n; i++){
		scanf("%d",&x[i]);
		sum += x[i];
	}
	
	printf("\nThe sum is %d\n",sum);
	printf("\nThe average is %f\n",sum/n);
	
	printf("\nThe numbers are : \n");
	for(int i = 0; i < n; i++){
		printf("%d\t",x[i]);		
	}
}
