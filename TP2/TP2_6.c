// 6. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad.

#include <stdio.h>

int main() {
    int edad1, edad2;
    float altura1, altura2;

    printf("Ingrese la edad y altura de la primera persona: ");
    scanf("%d %f", &edad1, &altura1);
    printf("Ingrese la edad y altura de la segunda persona: ");
    scanf("%d %f", &edad2, &altura2);

    if (edad1 > 0 && altura1 > 0 && edad2 > 0 && altura2 > 0) {
        if (edad1 > edad2) {
            printf("La altura de la persona mayor es: %.2f\n", altura1);
        } else {
            printf("La altura de la persona mayor es: %.2f\n", altura2);
        }
    } else {
        printf("Entrada no válida. Por favor, ingrese valores positivos.\n");
    }

    return 0;
}