#include <stdio.h>
void maxMin(int* arr, int size, int* max, int* min);

int main(){
	int arr[5];
	int minmin=0;
	int maxmax=0;
	
	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
		int input;
		scanf("%d",&input);
		arr[i] = input;
	}

		
	maxMin(arr,5, &maxmax, &minmin);

	printf("max value is %d", maxmax);
	printf("\nmin value is %d", minmin);
	return 0;

}

void maxMin(int* arr, int size, int* max, int* min){
	*max = *(arr);
	*min = *(arr);
	for(int i = 1; i<size; i++){
		if(*max < *(arr+i)) *max = *(arr+i);
	}
	for(int i = 1; i<size; i++){
		if(*min > *(arr+i)) *min = *(arr+i);
	}


}
