#include <stdio.h>

void sum(int* arr, int size);

int main(){
	int arr[5] = {1,2,3,4,5};
	sum(arr,5);
	return 0;

}

void sum(int* arr, int size){
	int *p = arr;
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += *(p+i);
	}
	printf("Sum of array : %d",sum);
}
