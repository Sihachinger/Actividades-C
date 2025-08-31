/*B10. Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes más un
plus del 10% del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de
ellos. Se ingresa el valor del vehículo y cuántos vehículos de ese tipo vendió. Calcular su sueldo e
imprimirlo.*/

#include <stdio.h>

// Validación para que se ingrese un float correctamente, es decir, un número real positivo
float pedir_precio_vehiculo() {
    float precio;
    int validacion;
    printf("Ingrese el precio del vehículo: ");
    validacion = scanf("%f", &precio);
    while (validacion != 1 || precio < 0) {
        printf("Precio inválido. Intente nuevamente.\n");
        while (getchar() != '\n');
        printf("Ingrese el precio del vehículo: ");
        validacion = scanf("%f", &precio);
    }
    return precio;
}

// Validación para que se ingrese un int correctamente, es decir, un número entero positivo
int pedir_cantidad_vendida() {
    int cantidad, validacion;
    printf("Ingrese la cantidad vendida: ");
    validacion = scanf("%d", &cantidad);
    while (validacion != 1 || cantidad < 0) {
        printf("Cantidad inválida. Intente nuevamente.\n");
        while (getchar() != '\n');
        printf("Ingrese la cantidad vendida: ");
        validacion = scanf("%d", &cantidad);
    }
    return cantidad;
}

int main () {
    printf("Ejercicio 10: Calcular sueldo de un vendedor de autos\n");
    float precio_vehiculo = pedir_precio_vehiculo();
    int cantidad_vendidos = pedir_cantidad_vendida();
    float sueldo_vendedor = 500 + (0.1f * precio_vehiculo * cantidad_vendidos) + (50 * cantidad_vendidos);
    printf("El sueldo del vendedor es %.2f pesos, habiendo vendido %d vehículos.\n", sueldo_vendedor, cantidad_vendidos);
    return 0;
}