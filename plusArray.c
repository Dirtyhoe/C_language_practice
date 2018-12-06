#include <stdio.h>
void sum2(int* arr1, int* arr2, int* arr3, int size);

int main(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {1,2,3,4,5};
	int arr3[5];

	sum2(arr1, arr2, arr3, 5);
	return 0;
}

void sum2(int* arr1, int* arr2, int* arr3, int size){
	for(int i = 0; i < size; i++){
		*(arr3+i) = *(arr2+i) + *(arr1+i);
		printf("%d th parameter of arr3 is : %d \n",i,*(arr3+i));
	}
	
}
