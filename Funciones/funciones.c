/*
 * funciones.c
 *
 *  Created on: 16 nov 2023
 *      Author: usuario
 */
#include <stdio.h>

void pedirVector(int vector[], int tam){
	int i;
	for (i = 0; i < tam; i++) {
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%d",&vector[i]);
	}
}

void mostrarVector(int vector[], int tam){
	int i;
	for (i = 0; i < tam; i++) {
		printf("%d\t",vector[i]);
	}
}

