//19000081//
//Q7//
#include<stdio.h>

int factorial(int *n){
	int i;
	int fact;
	if(*n==1){
		fact=1;
	}
	else if(*n==0){
		fact=1;
	}
	else if(*n>1){
		fact=*n;
		for(i=*n;i>1;i--){
			fact=fact*(i-1);
		}
	}
	return fact;
}

int main(){
	int n;
	printf("Enter the number to find factorial\n");
	scanf("%d",&n);
	int res;
	res=factorial(&n);
	printf("The factorial is %d\n",res);
	return 0;
}
