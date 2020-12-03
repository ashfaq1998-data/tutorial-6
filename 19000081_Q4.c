#include <stdio.h>
int main() {
   int array[5]={10,20,30,40,50};
   int *p;
   p=&array[0];
   int i;
   printf("The output is\n");
   for(i=0;i<5;i++){
   	printf("%d\n",*(p+i));
   }
    return 0;
}
