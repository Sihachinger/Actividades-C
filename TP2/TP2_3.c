//3. Ingresar los tres lados de un triangulo e indicar que tipo de triangulo es.

#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Ingrese el primer lado: ");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado: ");
    scanf("%f", &lado2);
    printf("Ingrese el tercer lado: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("El triángulo es equilátero, todos los lados son iguales.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("El triángulo es isósceles, dos lados son iguales.\n");
    } else {
        printf("El triángulo es escaleno, todos los lados son diferentes.\n");
    }

    return 0;
}

/*
3           Incluir Bibliotecas
5           Inicio del programa
8 - 13      Imprimir y pedir los lados
15 - 21     Analizar los lados e imprimir el resultado
23          Return
24          Fin del programa
*/