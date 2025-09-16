//Un algoritmo para obtener la suma de diez cantidades mediante la utilizacion de un ciclo While

#include <stdio.h>

int main() {
    int i = 0;
    float numero, suma = 0;

    while (i < 10) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%f", &numero);
        suma += numero;
        i++;
    }

    printf("La suma de las diez cantidades es: %.2f\n", suma);
    return 0;
}