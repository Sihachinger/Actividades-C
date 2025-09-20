// B8. Ingresar el valor de la hora y el tiempo trabajado de un operario, calcular su sueldo e imprimirlo.

#include <stdio.h>

int main() {
    float valorHora, tiempoTrabajado, sueldo;
    printf("Ejercicio 8: Calcular salario de un operario\n");
    printf("Ingrese el tiempo trabajado (en horas): ");
    scanf("%f", &tiempoTrabajado);
    printf("Ingrese el valor por hora: ");
    scanf("%f", &valorHora);
    sueldo = valorHora * tiempoTrabajado;
    printf("El sueldo del operario es %.2f pesos\n", sueldo);
    return 0;
}
