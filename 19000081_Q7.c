//19000081//
//Q6//
#include<stdio.h>
int swap(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("The value of \"1st\" after swapping is %d\n",*a);
	printf("The value of \"2nd\" after swapping is %d\n",*b);
}

int main(){
	int a;
	printf("Enter the 1st element\n");
	scanf("%d",&a);
	int b;
	printf("Enter the 2nd element\n");
	scanf("%d",&b);
	int x;
	x=swap(&a,&b);
	return 0; 
}
