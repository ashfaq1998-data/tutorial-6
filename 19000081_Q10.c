
//19000081//
//Q10//
#include<stdio.h>
#include<string.h>

int main(){
	char c[100];
	int count=0;
	printf("Please enter the string\n");
	gets(c);
	char *p;
	p=&c[0];
	int i;
	for(i=0;i<strlen(c);i++){
		if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u'){
			count++;
		}
	
	}
		printf("The vowel letters are %d\n",count);
		int x;
		x=strlen(c)-count;
		printf("The consonants letters are %d",x);
}
