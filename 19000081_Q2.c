//19000081//
//Q2//
#include<stdio.h>
int sum(int a, int b);
int main(){
	int a;
	int b;
	printf("Enter the 1st number\n");
	scanf("%d",&a);
	printf("Enter the 2nd number\n");
	scanf("%d",&b);
	
	int add;
	add=sum(a,b);
	printf("The sum is %d\n",add);
	return 0;
}

int sum(int a, int b){
	int *total;
	int x;
	total=&x;
	x=a+b;
	return x;
	
}
