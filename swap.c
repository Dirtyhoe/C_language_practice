#include <stdio.h>
void swap(int *num1, int*num2);

int main(){
	int a;
	int b;

	printf("num1,num2 :");
	scanf("%d %d",&a, &b);

	int *num1 = &a;
	int *num2 = &b;
	printf("main before swap -> num1 : %d num2 :%d",a,b);
	swap(&a,&b);	
	printf("\nmain before swap -> num1 : %d num2 :%d",a,b);
	return 0;
}

void swap(int *num1, int*num2){
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
