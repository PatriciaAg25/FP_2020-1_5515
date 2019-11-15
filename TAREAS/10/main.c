#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raincesR(double a, double b, double c, double determinante){
	double x1;
	double x2;
	double parte;
	//Se declaran las variables necesarias para la
	//resolución de raices reales
	parte=sqrt(determinante);
	x1=(-b/2*a)+(parte/2*a);
	x2=(-b/2*a)-(parte/2*a);
	printf("%.2lf\n", x1);
	printf("%.2lf\n", x2);
	//Resolución por FG
}
void raincesI(double a, double b, double c, double determinante){
	double parte;
	//Se declaran las variables necesarias para la
	//resolución de raíces imaginarías
	parte=sqrt(-determinante);
	//Se necesitan variables auxiliares
	double x11;
	double x12;
	double x21;
	double x22;

	//para el primer resultado x
	x11=-b/(2*a);
	x12=parte/(2*a);
	//para el segundo resultado x;
	x21=-b/(2*a);
	x22=-parte/(2*a);
	if(b==0){
		x11==0;
		x21==x11;
	}
	printf("%.2lf + %.2lfi \n", x11, x12);
	printf("%.2lf + %.2lfi \n", x21, x22);
	//Se agrega una 'i' para los imaginarios
}

void raizU(double a, double b){
	double xU;
	//Se declaran las variables para la resolución para
	//cuando solo hay un resultado
	xU=-b/(2*a);
	printf("%.2lf\n", xU);
}

int main(int argc, char*argu[]){
	double a;
	double b;
	double c;
	a=atof(argu[1]);
	b=atof(argu[2]);
	c=atof(argu[3]);
	double determinante;

	//Se genera el determinante
	determinante=pow(b,2);
	determinante=determinante-(4*a*c);

	if(determinante==0){
		raizU(a, b);
		//Una solución
	}
	//No mayor o menor
	else{
		//mayor=raices reales
		if(determinante>0){
			raincesR(a, b, c, determinante);
		}
		//menor=raices imaginarias
		else{
			raincesI(a, b, c, determinante);
		}
	}
	return 0;
}