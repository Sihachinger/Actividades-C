//Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros

#include <stdio.h>

int main () {
    float valores, positivos, negativos, ceros;
    for ( int i = 0; i < 10; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%f", &valores);
        if (valores > 0) {
            positivos++;
        } else if (valores < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }
    return 0;
}

/*
1       Enunciado
3       Bibliotecas
5       Funcion main
6       Declaracion de variables
7-17    Ingreso de datos y conteo de positivos, negativos y ceros
19      Fin del programa
*/