#include <stdio.h>

int fact(int num){
	if (num > 1){
	return num*fact(num-1);
}else{
	return 1;
}
}

main(){
	int a;
	printf("Enter num : ");
	scanf("%d",&a);
	printf("Factorial of %d is %d",a,fact(a));
}
