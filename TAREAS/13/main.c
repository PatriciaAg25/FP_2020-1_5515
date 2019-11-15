#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argu[]){
	//Se necesita una lista de enteros
	int numeros[argc-1];
	//Se declaran las variables necesarias
	int i=0;
	int j=1;
	int numero;

	while(i<argc-1){
		numero=atoi(argu[j]);
		numeros[i]=numero;
		i++;
		j++;
	}

	int temporal;
	//Variable requerida para guardar los
	//datos obtenidos
	for (i=1;i<argc-1;i++){
		for (j=0;j<argc-1-i;j++){
			//Se comparan los numeros de dos en dos
			//en caso de no estar ordenados
			if(numeros[j]>numeros[j+1]){
				//se guarda en temp
				temporal=numeros[j];
				//Se retrocede el siguiente numero
				numeros[j]=numeros[j+1];
				//El siguiente numero se cambia por temp
				numeros[j+1]=temporal;
			}
		}
	}
	//Se muestra con ayuda de for
	for (int i=0;i<argc-1;i++){
		printf("%i\n", numeros[i]);
	}
}