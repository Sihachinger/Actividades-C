// Ingresar el valor de la hora y el tiempo trabajado de un operario, calcular su sueldo e imprimirlo.

#include <stdio.h>

int main() {
    printf("Ejercicio 8: Calcular salario de un operario\n");
    float tiempo_trabajado, valor_hora, sueldo;
    printf("Ingrese el tiempo trabajado (en horas): ");
    scanf("%f", &tiempo_trabajado);
    printf("Ingrese el valor por hora: ");
    scanf("%f", &valor_hora);
    sueldo = valor_hora * tiempo_trabajado;
    printf("El sueldo del operario es %.2f pesos\n", sueldo);
    return 0;
}
