#include <stdio.h>
#include <stdlib.h>

int main(int argC, char *argu[]){
	int num;
	num=atoi(argu[1]);
	if (num%2==0){
		printf("1\n");
	}
	else {
		printf("0\n");
	}
	return 0;
}