#include <stdio.h>
void arr_reverse(int[], int size);

int main(){
	int arr[5];
	printf("enter 5 numbers in arr :");
	for(int i=0; i<5;i++) scanf("%d",&arr[i]);

	printf("\n main's before reverse arr : ");
	for(int i =0; i<5; i++)	{
		printf("%d ",arr[i]);

	}
	arr_reverse(arr, 5);

	
	printf("\n main's after reverse arr : ");
	
	for(int i =0; i<5; i++){
		printf("%d ",arr[i]);}
	return 0;
}


void arr_reverse(int arr[], int size){
	int arr2[size];

	for(int i =0; i<5; i++){
		arr2[i] = arr[i];
		}
	printf("\n function's before revers arr : ");
	for(int i =0; i<5; i++){
		printf("%d ",arr2[i]);}

	
	printf("\n function's after revers arr : ");
	for(int i =0; i<5; i++){
		arr[i] = arr2[4-i];
		printf("%d ",arr[i]);
		}
}
	

