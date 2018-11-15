#include <stdio.h>

void get_average(int[][3], int student_num, int test_num);

int main(){
	int arr[3][3]={
	{30, 10, 11},
	{40, 90, 32},
	{70, 65, 56}};

	get_average(arr, 3, 3);
	return 0;
}

void get_average(int arr[][3], int student_num, int test_num){
	for(int i=0; i<3; i++){
		double sum =0;
		double avg =0;
			for(int j =0; j<3; j++){
				sum += arr[i][j];		
				}
		avg = sum/test_num;
		printf("student %d's average score is %lf\n",i+1, avg);
	}
	
		

}
