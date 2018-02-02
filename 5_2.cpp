#include <stdio.h>

void swap_call_by_value(int num1,int num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void swap_call_by_reference(int *num1,int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

main(){
	int a,b;
	printf("Enter 2 numnber\n");
	scanf("%d%d",&a,&b);
	
	swap_call_by_value(a,b);
	
	printf("\nUsing call by value :\n");
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n",b);
	
	swap_call_by_reference(&a,&b);
	
	printf("\nUsing call by reference :\n");
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n",b);
}
