#include<stdio.h>
int main(){
	int a;
	int b;
	int *x;
	int *y;
	int sum;
	printf("Please enter the number\n");
	scanf("%d",&a);
	scanf("%d",&b);
	x=&a;
	y=&b;
	
	sum=*x+*y;
	printf("The sum of %d and %d is %d\n",*x,*y,sum);
	
	return 0;
}
