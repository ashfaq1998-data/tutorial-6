//19000081//
//Q13//
#include<stdio.h>
int main(){
	int a,i;
	int b;
	int n;
	int array[100];
	printf("Enter the size\n");
	scanf("%d",&n);
	printf("The elements are:\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	a=0;
	b=n-1;
	
	int temp;
	int *p;
	p=&array[0];
	
	while(b>a){
		temp=*(p+a);
		*(p+a)=*(p+b);
		*(p+b)=temp;
		a++;
		b--;
	}
	printf("The reverse elements are:\n");
	for(i=0;i<n;i++){
		
		printf("%d\t",*(p+i));
	}
}
