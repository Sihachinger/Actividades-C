#include <stdio.h>

int main (void) {
    float precio_vehiculo, sueldo_vendedor;
    int cantidad_vendidos, validacion;
    char buffer;

    printf("Ejercicio 10: Calcular sueldo de un vendedor de autos\n");

    do {
        printf("Ingrese el precio del vehículo y la cantidad vendida separados por un espacio: ");
        validacion = scanf("%f %d%c", &precio_vehiculo, &cantidad_vendidos, &buffer);

        if (validacion != 3 || cantidad_vendidos < 0 || buffer != '\n') {
            // Limpiar solamente si hubo desborde en la línea o si scanf no tomó los 3
            if (validacion != 3 || buffer != '\n') {
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) { /* descartar */ }
            }
            printf("La cantidad ingresada no es válida, inténtelo nuevamente.\n");
        }
    } while (validacion != 3 || cantidad_vendidos < 0 || buffer != '\n');

    sueldo_vendedor = 500 + (0.1f * precio_vehiculo * cantidad_vendidos) + (50.0f * cantidad_vendidos);
    printf("El sueldo del vendedor es %.2f pesos, habiendo vendido %d\n", sueldo_vendedor, cantidad_vendidos);
    return 0;
}
