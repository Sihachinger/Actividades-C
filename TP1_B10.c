//Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes más un plus del 10% del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de ellos. Se ingresa el valor del vehículo y cuántos vehículos de ese tipo vendió. Calcular su sueldo e imprimirlo.

#include <stdio.h>

int main () {
    float precio_vehiculo, sueldo_vendedor;
    int cantidad_vendidos;
    printf("Ejercicio 10: Calcular sueldo de un vendedor de autos\n");
    printf("Ingrese el precio del vehículo y la cantidad vendida: ");
    scanf("%f %d", &precio_vehiculo, &cantidad_vendidos);
    sueldo_vendedor = 500 + (0.1 * precio_vehiculo * cantidad_vendidos) + (50 * cantidad_vendidos);
    printf("El sueldo del vendedor es %d pesos, habiendo vendido %d\n", sueldo_vendedor, cantidad_vendidos);
    return 0;
}
