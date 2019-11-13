#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char*argu[]){
	int x;
	x=strlen(argu[1]);
	//Se declara el número del que se sumarán sus dígitos
	//y se guarda en una lista para poder tomarlos

	char arguc[x];
	//el resultado se determina a partir del primer dígito
	int resultado=0;
	int dig[x];
	// se declaran otras listas que nos ayudaran a la suma de caracteres

	for(int i=0; i<x; i++){
		arguc[i]=argu[1][i];
		dig[i]=atoi(&arguc[i]);
		//Se hace uso de un ciclo para guardar el número en una lista de caracteres
		//y después en una de enteros, lo cual nos dara la suma de los dígitos

		resultado=resultado+dig[i];
		//suma total de los dígitos
	}
	printf("%i\n", resultado);
	return 0;
}