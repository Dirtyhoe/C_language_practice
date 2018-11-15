#include <stdio.h>


	

	int gcd(int x,int y){
		int r,temp;
		if(x < y){
		temp = x;
		x = y;
		y = temp;
		}
		
		while(y!= 0){
		 r= x % y;
		 x = y;
		 y = r;
		 }

		 return x;
		 }
	
	int main(void){
		 int x,y;
		 printf("input two numbers :");
		 scanf("%d %d",&x,&y);
		
		 printf("gcd is : %d",gcd(x,y));
	
	
	return 0;
	}
