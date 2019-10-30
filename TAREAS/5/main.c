#include <stdio.h>
#include <stdlib.h>

int valor(char n){
	int x;
	switch(n){
		case 'J':
			x=10;
			break;
		case 'Q':
			x=10;
			break;
		case 'K':
			x=10;
			break;
		case 'A':
			x=11;
			break;
		case 'j':
			x=10;
			break;
		case 'q':
			x=10;
			break;
		case 'k':
			x=10;
			break;
		case 'a':
			x=10;
			break;
	}
	return x;
}
int main(int argc, char* argv[]){
	int resultado,
	coi;

	for(int i=1; i<argc; i++){

		coi=argv[i][0]=='J'||argv[i][0]=='j'||
		argv[i][0]=='Q'||argv[i][0]=='q'||argv[i][0]=='K'
		||argv[i][0]=='k'||argv[i][0]=='A'||argv[i][0]=='a';

		if (coi==1){
			resultado=valor(argv[i][0]);
		}
		else{
			resultado=atoi(argv[i]);
		}
		printf("%i\n", resultado);
	}
	return 0;
}