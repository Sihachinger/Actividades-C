// Un algoritmo para obtener la suma de diez cantidades mediante la utilizacion de un ciclo For

#include <stdio.h>

int main() {
    float numero, suma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%f", &numero);
        suma += numero;
    }

    printf("La suma de las diez cantidades es: %.2f\n", suma);
    return 0;
}