//Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros

#include <stdio.h>

int main () {
    float valores;
    int positivos = 0, negativos = 0, ceros = 0;

    for ( int i = 0; i < 10; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%f", &valores);
        if (valores > 0) {
            positivos++;
        } else if (valores < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    printf("La cantidad de números positivos es: %d\n", positivos);
    printf("La cantidad de números negativos es: %d\n", negativos);
    printf("La cantidad de ceros es: %d\n", ceros);

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