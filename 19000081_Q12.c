//19000081//
//Q12//
#include<stdio.h>
int main(){
	int sum=0;
	int arr[100];
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	
	int *p;
	p=&arr[0];
	int i;
	printf("The elements are:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		sum=sum+*(p+i);
	}
	printf("The sum of the array is %d",sum);
}
