#include <stdio.h>

int n,i,j,temp;
void sort_ascend(int *for_sort){
		for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if (for_sort[i]>for_sort[j]){
				temp = for_sort[i];
				for_sort[i] = for_sort[j];
				for_sort[j] = temp;
			}
		}
	}
}

void add_value(int *original){
	printf("\n\nEnter %d numbers\n",n);
	for(i = 0; i < n; i++){
		scanf("%d",&original[i]);
	}
}

main(){
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	int original[n],for_sort[n];
	add_value(original);
	
	for(i = 0; i<n;i++)for_sort[i] = original[i];
	
	sort_ascend(for_sort);
	
	printf("\n\nOriginal sequence : ");
	for(i = 0; i<n;i++)printf("%d\t",original[i]);
	printf("\n\nSorted sequence   : ");
	for(i = 0; i<n;i++)printf("%d\t",for_sort[i]);
	
}
