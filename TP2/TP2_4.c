// 4. Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos valores es mayor al promedio.

#include <stdio.h>

int main() {
    float valor1, valor2, valor3, promedio;

    printf("Ingrese los valores separados por espacios: ");
    scanf("%f %f %f", &valor1, &valor2, &valor3);

    promedio = (valor1 + valor2 + valor3) / 3;
    printf("El promedio es: %.2f\n", promedio);

    if (valor1 > promedio) {
        printf("El primer valor es mayor al promedio.\n");
    }
    if (valor2 > promedio) {
        printf("El segundo valor es mayor al promedio.\n");
    }
    if (valor3 > promedio) {
        printf("El tercer valor es mayor al promedio.\n");
    }

    return 0;
}