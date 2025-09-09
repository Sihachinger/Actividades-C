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
}