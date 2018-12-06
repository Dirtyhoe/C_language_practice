#include <stdio.h>
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main(){
	int a, b;
	printf("type two numbers :");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int lcm, gcd;
	get_lcm_gcd(a, b, &lcm, &gcd); 
	printf("gcd : %d, lcm : %d",gcd, lcm);
	return 0;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd){
	
	int a,b=0;
	int temp=0;
	a = x;
	b = y;
	while(b !=0){
		temp = b;
		b = a%b;
		a = temp;	
	}

	*p_gcd = a;
	*p_lcm = (x*y)/a;

}
