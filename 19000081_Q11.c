//19000081//
//Q11//
#include<stdio.h>
int main(){
	int arr[100];
	int n,i,j,temp;
	printf("Please enter the size\n");
	scanf("%d",&n);
	
	printf("Please enter all the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int *p;
	p=&arr[0];
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i)>*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
}
