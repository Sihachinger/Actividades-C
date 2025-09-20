// 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con más de 5 años de antigüedad

#include <stdio.h>

#include <stdio.h>

int main() {
    float sueldo, sueldoFinal;
    int categoria, antiguedad;

    printf("Ingrese el sueldo del empleado, seguido de la categoria y la antiguedad (en años) todo separado por espacios: ");
    scanf("%f %d %d", &sueldo, &categoria, &antiguedad);

    if (categoria == 1) {
        sueldoFinal = sueldo + (50 * antiguedad);
    } else {
        sueldoFinal = sueldo;
    }

    if (antiguedad > 5) {
        printf("El empleado tiene más de 5 años de antigüedad.\n");
    }

    printf("El sueldo final del empleado es: %.2f\n", sueldoFinal);
    return 0;
}