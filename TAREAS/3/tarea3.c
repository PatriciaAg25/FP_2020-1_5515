#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float x;
	float y;
	float suma;
	float resta;
	float mult;
	float div;
	x=atoi(argv[1]);
	y=atoi(argv[2]);

	suma=x+y;
	printf("%.2f\n", suma);
	resta=x-y;
	printf("%.2f\n", resta);
	mult=x*y;
	printf("%.2f\n", mult);
	div=x/y;
	printf("%.2f\n", div);

	return 0;
}