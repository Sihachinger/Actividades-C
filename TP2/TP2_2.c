//2. Ingresar un valor, indicar e imprimir si es positivo, negativo o cero.

#include <stdio.h>

int main() {
    float valor;

    printf("Ingrese un valor: ");
    scanf("%f", &valor);

    if (valor > 0) {
        printf("El valor es positivo.\n");
    } else if (valor < 0) {
        printf("El valor es negativo.\n");
    } else {
        printf("El valor es cero.\n");
    }

    return 0;
}

/*
3           Incluir Bibliotecas
5           Inicio del programa
6           Declarar variables
8 - 9       Leer el valor
11 - 17     Analizar el valor e imprimir el resultado
19          Return
20          Fin del programa
*/