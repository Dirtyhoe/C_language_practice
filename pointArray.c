#include <stdio.h>
void max(int* ptrarr[], int size);

int main(){
	int arr[5] = {1,2,3,4,5};
	int* ptrarr[5];
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++){ // size of arry divided by size of int. int is sizeof each array
		ptrarr[i] = &arr[i];
		printf("%d",*ptrarr[i]);
	}
	
	max(ptrarr,5);
	return 0;
}

void max(int* ptrarr[], int size){ 
	int max = *ptrarr[0];
	for(int i = 1; i < sizeof(ptrarr)/sizeof(int*); i++){
		if(*ptrarr[i] > max) 
			max = *ptrarr[i];	
	}
	printf("max numer is : %d", max);
}




