//1. Ingresar dos valores, indicar e imprimir si son iguales.

#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Ingrese el primer valor: ");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &valor2);

    if (valor1 == valor2) {
        printf("Los valores son iguales.\n");
    } else {
        printf("Los valores son diferentes.\n");
    }
    
    return 0;
}