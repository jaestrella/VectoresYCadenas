/*
 ============================================================================
 Name        : Ejercicio01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 15
int main(void) {
	int numeros[MAX],tam;
	do{
		printf("Introduce el tamaño del array (1-15): ");
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0||tam>MAX);

	puts("Este es el vector normal.");
	pedirVectorRandom(numeros,tam);
	mostrarVector(numeros,tam);
	printf("\n");
	puts("Este es el vector invertido.");
	invertirVector(numeros,tam);
	mostrarVector(numeros,tam);
}
