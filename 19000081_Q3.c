//19000081//
//Q3//
#include<stdio.h>
int main(){
	int a;
	int b;
	int *x;
	int *y;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	x=&a;
	y=&b;
	
	if(*x>*y){
		printf("%d is the maximum number\n",*x);
	}else if(*y>*x){
		printf("%d is the maximum number\n",*y);
	}
	return 0;
}
