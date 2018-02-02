#include <stdio.h>

int power(int num1,int num2){
	if (num2 > 1){
	return num1*power(num1,num2-1);
}else{
	return 1;
}
}

main(){
	int a,b;
	printf("Enter num : ");
	scanf("%d%d",&a,&b);
	printf("%d ^ %d is %d",a,b,power(a,b));
}
