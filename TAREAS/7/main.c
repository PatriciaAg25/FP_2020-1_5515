#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float resultado=1;
	float x;
	float y;
	x=atof(argv[1]);
	y=atof(argv[2]);

	for(int i=0; i<y; i++){
		resultado=resultado*x;
	}

	printf("%.2f\n", resultado);
	return 0;

}