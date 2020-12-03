//19000081//
//Q5//
#include<stdio.h>
int main(){
	int i;
	int n;
	int *p;
	printf("Enter the size\n");
	scanf("%d",&n);
	p = (int*) calloc(n,sizeof(int));  
	printf("Enter all the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	int large;
	large=p[0];
	for(i=1;i<n;i++){
		if(large<p[i]){
			large=p[i];
		}
	}
	printf("The largest element in the range is %d\n",large);
}
