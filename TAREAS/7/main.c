#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	float potencia;
	float x;
	float y;
	x=atof(argv[1]);
	y=atof(argv[2]);

	potencia = pow(x, y);
	printf("%.2lf\n", potencia);
	return 0;

}