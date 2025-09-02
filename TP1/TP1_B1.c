#include <stdio.h>

// Funcion para validar y obtener dos enteros
int obtener_enteros(int *n1, int *n2) {
    char validacion;
    // Retorna 1 si lee dos enteros, de lo contrario 0 y limpia el búfer
    if (scanf("%d %d%c", n1, n2, &validacion) == 3 && validacion == '\n') {
        return 1;
    } else {
        while (getchar() != '\n');
        return 0;
    }
}

// Función principal
int main() {
    int num1, num2;
    printf("Ejercicio 1: Sumar dos valores enteros\n");
    
    // Bucle do-while para solicitar y validar la entrada
    do {
        // Buscamos como aplicar colores en la terminal por medio de códigos ANSI, para resaltar que se esperan enteros
        printf("Ingrese dos valores \033[36menteros\033[0m:  ");
    } while (!obtener_enteros(&num1, &num2));
    printf("La suma de %d y %d es %d\n", num1, num2, num1 + num2);
    return 0;
}
