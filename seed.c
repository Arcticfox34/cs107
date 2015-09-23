#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

char input, n;
int output;
n='n';


do{
	printf("input a char\n");
	scanf("%c\n",&input);
	printf("You input %c \n", input);
}while(n!=input);
return 0;
}
