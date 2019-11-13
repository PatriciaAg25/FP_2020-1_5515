#include <stdio.h>
#include <string.h>

int main (){
	FILE * archivo, *archivosalida;
	archivo = fopen("calaverita.txt", "r");

	char linea[100];
	char palabra[20];
	int lineas;

    int contador = 0;

    int longui=0;
    int caracteres;

	lineas=0;

    archivo = fopen("calaverita.txt", "r");
	while(!feof(archivo)){
		fgets(linea, 99, archivo);
		printf("%s", linea);
		lineas=lineas+1;
	}
	printf("Número de líneas: %i\n", lineas);

    archivo = fopen("calaverita.txt", "r");
    while(!feof(archivo)){
        fscanf(archivo, "%8s", palabra);
        contador++;
    }

    printf("Número de palabras: %i \n", contador);

    archivo = fopen("calaverita.txt", "r");
    while(!feof(archivo)){
        fgets(linea, 89, archivo);
        longui=strlen(palabra);
        caracteres=caracteres + longui;
    }
    printf("Número de caracteres %i \n", caracteres);

int main(){
    archivo=fopen("calaverita.txt", "r");
    archivosalida=fopen("calaverita_salida.txt", "w");
	char listaarchivo[lineas][100];
	
	for(int i=0; i<lineas; i++){
		if(i==0){
			fprintf(archivosalida, "%s \n", listaarchivo[i]);
		}
		else{
			fprintf(archivosalida, "%s", listaarchivo[i]);
		}
	}
    return 0;
}
