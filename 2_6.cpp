//WAP to display sum and average of n numbers
# include <stdio.h>

main(){
	int n;
	float ave;

	printf("Enter the number of Numbers you want to enter :");
	scanf("%d",&n);
	float sum = 0,b;
		for (int i = 0;i<n;i++){
			printf("Enter %d number :",i+1);
			scanf("%f",&b);
			sum += b;
		}
	ave = sum/n;
	printf("\nThe sum is %f", sum);
	printf("\nThe average is %f",ave);
}
