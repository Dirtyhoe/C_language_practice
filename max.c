#include <stdio.h>

int maxArr(int* arr, int size);

int main (){

	int arr[5] = {10, 20, 30, 40, 50};
	int max =0;
	for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++){
		printf("%d ", arr[i]);
	}
	max = maxArr(arr,5);
	printf("%d" ,max);
	


	return 0;
}

int maxArr(int* arr, int size){
	int max=0;
	int *p = arr;
	for(int i =1; i<(size); i++){
		if(max <*(p+i)) max = *(p+i) ;
	}
	return max; 

}
