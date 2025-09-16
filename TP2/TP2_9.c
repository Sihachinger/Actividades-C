// 9. Ingresar el sueldo, categoría y antigüedad de un empleado, calcular el sueldo final de cada uno de ellos, si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad.

#include <stdio.h>

int main() {
    float sueldo, sueldoFinal;
    int categoria, antiguedad;

    printf("Ingrese el sueldo del empleado, seguido de la categoria (1-3) y la antiguedad (en años) todo separado por espacios: ");
    scanf("%f %d %d", &sueldo, &categoria, &antiguedad);

    if (categoria == 1) {
        sueldoFinal = sueldo + (50 * antiguedad);
    } else {
        sueldoFinal = sueldo;
    }

    printf("El sueldo final del empleado es: %.2f\n", sueldoFinal);
    return 0;
}

/*
3           Incluir Bibliotecas
5           Inicio del programa
6 - 7       Declarar variables
9 - 10      Imprimir y pedir los valores
12 - 16     Calcular el sueldo final
18          Imprimir el sueldo final
19          Return
20          Fin del programa
*/