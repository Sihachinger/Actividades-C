// B1. Ingresar dos valores enteros e imprimir la suma.

#include <stdio.h>

int main () {
    int num1, num2;
    char validacion;
    printf("Ejercicio 1: Sumar dos valores enteros\n");
    while (1) {
        printf("Ingrese dos valores enteros: ");
        if (scanf("%d %d%c", &num1, &num2, &validacion) == 3 && validacion == '\n') {
            break;
        } else {
            printf("Entrada inválida. Asegúrese de ingresar dos enteros sin decimales.\n");
            while (getchar() != '\n');
        }
    }
    printf("La suma de %d y %d es %d\n", num1, num2, num1 + num2);
    return 0;
}
