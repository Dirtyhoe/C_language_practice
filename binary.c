#include <stdio.h>
void binary_converse(int decimalNum);

int main(){
	int num;
	printf("enter decimalNum :");
	scanf("%d",&num);

	binary_converse(num);
	return 0;


}

void binary_converse(int decimalNum){
	int b;
	if(decimalNum== 1) {
	b = 1;
	}else{
	binary_converse(decimalNum/2);
	b = (decimalNum%2);
	}
	printf("%d",b);
}
