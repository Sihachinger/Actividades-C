// Cuanto s debe pagar por X cantidad de lapices considerando que si son 1000 o más el costo es de 85, e lo contrario el precio es de 90
#include <stdio.h>

int main() {
    int cantidad;
    float precio;

    printf("Ingrese la cantidad de lapices que desea comprar: ");
    scanf("%d", &cantidad);

    if (cantidad >= 1000) {
        precio = 85;
    } else {
        precio = 90;
    }

    printf("El total a pagar por %d lapices es: %.2f\n", cantidad, cantidad * precio);

    return 0;
}