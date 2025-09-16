//5. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de estas sumas es mayor

#include <stdio.h>

int main() {
    float valor1, valor2, valor3, valor4;

    printf("Ingrese cuatro valores separados por un espacio: ");
    scanf("%f %f %f %f", &valor1, &valor2, &valor3, &valor4);

    if ((valor1 + valor2) > (valor3 + valor4)) {
        printf("La suma de \"%.2f\" y \"%.2f\" es mayor.\n", valor1, valor2);
    } else if ((valor3 + valor4) > (valor1 + valor2)) {
        printf("La suma de \"%.2f\" y \"%.2f\" es mayor.\n", valor3, valor4);
    } else {
        printf("Las sumas son iguales.\n");
    }

    return 0;
}

/*
3           Incluir Bibliotecas
5           Inicio del programa
6           Declarar variables
8 - 9       Imprimir y pedir los valores
11 - 17     Calcular la suma e imprimir el resultado de la mayor de las sumas
19          Return
20          Fin del programa
*/