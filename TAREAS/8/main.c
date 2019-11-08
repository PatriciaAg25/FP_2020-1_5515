#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float fah;
	float cel;
	float x;
	float y;
	x=atof(argv[1]);
	y=atof(argv[2]);

	if(x==0){
	// Conversion a grados fahrenheit
		fah = (1.8*y)+32;
		printf("%.2f\n", fah);
	}
	if(x==1){
		cel=(y-32)/1.8;
		printf("%.2f\n", cel);
	}
}