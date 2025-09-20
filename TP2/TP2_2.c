//2. Ingresar un valor, indicar e imprimir si es positivo, negativo o cero.

#include <stdio.h>

int main() {
    float valor;

    printf("Ingrese un valor: ");
    scanf("%f", &valor);

    if (valor > 0) {
        printf("El valor es positivo.\n");
    } else if (valor < 0) {
        printf("El valor es negativo.\n");
    } else {
        printf("El valor es cero.\n");
    }

    return 0;
}