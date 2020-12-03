//19000081//
//Q6//
#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("Please enter the string of characters\n");
	gets(string);
	char *p;
	p=&string[0];
	int i=0;
	while(*(p+i) != '\0'){
		i++;
	}
	printf("The length of the string is %d\n",i);
}
