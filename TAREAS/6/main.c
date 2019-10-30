#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int x;
	int argui[argc];
	int i;
	int j;

	for(int i=1; i<argc; i++){
		x=1;

		for(int j=1; j<argc; j++){
			argui[j]=atoi(argv[j]);
			x=x*argui[j];
		}
		x=x/argui[i];
		printf("%i\n", x);
	}

	return 0;
}