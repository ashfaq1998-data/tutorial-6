//19000081//
//Q14//
#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	char temp;
	int i;
	printf("Enter the string\n");
	gets(s);
	int l;
	l=strlen(s);
	int b;
	b=l-1;
	char *p;
	p=&s[0];
	
	int a;
	a=0;
	
	while(b>a){
		temp=*(p+a);
		*(p+a)=*(p+b);
		*(p+b)=temp;
		b--;
		a++;
		
	}
	printf("The reverse string is:\n");
	for(i=0;i<l;i++){
		printf("%c",*(p+i));
	}
	
}
