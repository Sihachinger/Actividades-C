// B1. Ingresar dos valores enteros e imprimir la suma.

#include <stdio.h>

int main () {
    int num1, num2, suma, validacion;
    printf("Ejercicio 1: Sumar dos valores enteros\n");
    do {
        printf("Ingrese dos valores enteros: ");
        validacion = scanf("%d %d", &num1, &num2);
        if (validacion != 2)
        {
            printf("Los números ingresados no son enteros, intentelo nuevamente.");
            while (getchar() != '\n');
        }
    } while (validacion != 2);
    suma = num1 + num2;
    printf("La suma de %d y %d es %d\n", num1, num2, suma);
    return 0;
}
