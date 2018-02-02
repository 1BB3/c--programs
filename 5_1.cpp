#include <stdio.h>
#include <conio.h>

int add(int num1, int num2){
	return num1 + num2;
}

int sub(int num1, int num2){
	return (num1>num2)?num1-num2:num2-num1;
}

int mul(int num1, int num2){
	return num1 * num2;
}

int div(int num1, int num2){
	return num1 / num2;
}

main(){
	int choice;
	printf("Select operation : ");
	printf("\n1. Addition");
	printf("\n2. Diffrernce");
	printf("\n3. Multiply");
	printf("\n4. Division\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:{
			int a,b;
			printf("Enter numbers : ");
			scanf("%d%d",&a,&b);
			printf("Sum is : %d",add(a,b));
			break;
		}
		
		case 2:{
			int a,b;
			printf("Enter numbers : ");
			scanf("%d%d",&a,&b);
			printf("DIfference is : %d",sub(a,b));
			break;
		}
		
		case 3:{
			int a,b;
			printf("Enter numbers : ");
			scanf("%d%d",&a,&b);
			printf("Product is : %d",mul(a,b));
			break;
		}
		
		case 4:{
			int a,b;
			printf("Enter numbers : ");
			scanf("%d%d",&a,&b);
			printf("Quotient is : %d",div(a,b));
			break;
		}
		
		default:
			printf("Invalid entry");
			break;	
	}
}
