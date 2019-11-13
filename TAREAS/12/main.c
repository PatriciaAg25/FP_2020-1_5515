#include <stdio.h>
#include <stdlib.h>

int saludos(int personas){
	int total;
	int saludo;
	//Se declaran las variables necesarias para ejecutar el problema

	saludo=personas-1;
	//el total de saludos de una persona son el numero de personas
	//menos la persona en cuestión

	if(saludo==0){
	return saludo;
	//con una persona no tenemos saludos
	}
	total=saludo+saludos(personas-1);
	return total;
}
int main(int argc, char*argv[]){
	int resultado;
	int personas;
	// se vuelven a declarar las variables necesarias

	personas=atoi(argv[1]);
	// se convierte a entero para poder usarlo

	resultado=saludos(personas);
	//se llama a la función

	printf("%o\n", resultado);
	return 0;
}