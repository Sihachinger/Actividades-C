// B1. Ingresar dos valores enteros e imprimir esta suma.

#include <stdio.h>

// Función para pedir y validar precio y cantidad
void pedir_datos(float *precio_vehiculo, int *cantidad_vendidos) {
    int validacion;
    char buffer;
    printf("Ingrese el precio del vehículo y la cantidad vendida separados por un espacio: ");
    validacion = scanf("%f %d%c", precio_vehiculo, cantidad_vendidos, &buffer);
    while (validacion != 3 || *cantidad_vendidos < 0 || *precio_vehiculo < 0 || buffer != '\n') {
        if (validacion != 3 || buffer != '\n') {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) { /* descartar */ }
        }
        printf("La cantidad ingresada no es válida, inténtelo nuevamente.\n");
        printf("Ingrese el precio del vehículo y la cantidad vendida separados por un espacio: ");
        validacion = scanf("%f %d%c", precio_vehiculo, cantidad_vendidos, &buffer);
    }
}

int main(void) {
    float precio_vehiculo, sueldo_vendedor;
    int cantidad_vendidos;
    printf("Ejercicio 10: Calcular sueldo de un vendedor de autos\n");
    pedir_datos(&precio_vehiculo, &cantidad_vendidos);
    sueldo_vendedor = 500 + (0.1f * precio_vehiculo * cantidad_vendidos) + (50.0f * cantidad_vendidos);
    printf("El sueldo del vendedor es %.2f pesos, habiendo vendido %d\n", sueldo_vendedor, cantidad_vendidos);
    return 0;
}