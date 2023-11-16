/*
 * funciones.h
 *
 *  Created on: 16 nov 2023
 *      Author: usuario
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/**
 * procedimiento que pide un vestor por teclado
 * pide tantos elementos como indique el parametro tam
 */
void pedirVector(int vector[], int tam);
/**
 * procedimiento que muestra un vector por pantalla
 * hay que pasarle el argumento tam para indicar cuantos elementos del vector
 * deben mostrarse
 */
void mostrarVector(int vector[], int tam);
/**
 * funcion que invierte un vector
 */
void invertirVector(int vector[], int tam);
/**
 * funcion que muestra numeros aleatorios
 */
void pedirVectorRandom(int vector[], int tam);
#endif /* FUNCIONES_H_ */
