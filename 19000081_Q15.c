//19000081//
//Q15//
#include<stdio.h>
int main(){
	printf("The alphabets are\n");
	char c[26];
	char *p;
	p=&c[0];

	int i;
	for(i=0;i<26;i++){
		c[i]='A'+i;
	}
	
		for(i=0;i<26;i++){
		printf("%c\t",*(p+i));
	}
	
}
