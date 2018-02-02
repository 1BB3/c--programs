#include <stdio.h>
main(){
	int n,i,j,temp;
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	int original[n],for_sort[n];
	
	printf("\n\nEnter %d numbers\n",n);
	for(i = 0; i < n; i++){
		scanf("%d",&original[i]);
	}
	
	for(i = 0; i<n;i++)for_sort[i] = original[i];
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if (for_sort[i]>for_sort[j]){
				temp = for_sort[i];
				for_sort[i] = for_sort[j];
				for_sort[j] = temp;
			}
		}
	}
	
	printf("\n\nOriginal sequence : ");
	for(i = 0; i<n;i++)printf("%d\t",original[i]);
	printf("\n\nSorted sequence   : ");
	for(i = 0; i<n;i++)printf("%d\t",for_sort[i]);
	
}
