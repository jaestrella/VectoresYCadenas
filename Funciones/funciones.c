/*
 * funciones.c
 *
 *  Created on: 16 nov 2023
 *      Author: usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void pedirVectorRandom(int vector[],int tam){
	srand(time(NULL));
	int i;
	int pedirRandom;
	for(i=0;i<tam;i++){
		pedirRandom=rand()%11;
		vector[i]=pedirRandom;
	}
}

void invertirVector(int vector[], int tam){
	int i=0;
	int j=tam-1;
	while(i<j){
		int aux=vector[i];
		vector[i]=vector[j];
		vector[j]=aux;
		j--;
		i++;
	}
}

