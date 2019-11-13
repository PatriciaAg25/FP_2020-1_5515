#include <stdio.h>
#include <stdlib.h>

double raiz(double x, double tolerancia, double resultado){
	double div;
	double dif;
	//se declaran las variables necesarias a usar en una función llamada raiz

	div=x/resultado;
	dif=resultado-div;
	//se hacen las operaciones requeridas

	dif=dif>0? dif:-dif;
	//diferencia con valor absoluto

	if(dif<=tolerancia){
	return resultado;
	//Se hace una comparación, si la diferencua es menor o igual a la tolerancia
	//el candidato se toma como resultado
	}
	else{
	resultado=(resultado+div)/2;
	//Se obtiene un nuevo candidato
	return raiz(x, tolerancia, resultado);
	}
}
int main (int argc, char*argv[]){
	double x;
	double tolerancia;
	double resultado;
	// Se vuelven a declarar las variables necesarias en esta nueva función

	x=atof(argv[1]);
	tolerancia=atof(argv[2]);
	resultado=atof(argv[3]);
	//los caracteres se vuelven variables a utilizar

	resultado=raiz(x, tolerancia, resultado);
	printf("%lf\n", resultado);
}