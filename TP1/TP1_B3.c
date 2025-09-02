//Ingresar tres valores, sumarlos e imprimir esa suma, se puede sumar de a varios operandos en la misma operación

#include <stdio.h>

int main () {
    float num1, num2, num3, suma_total;
    printf("Ejercicio 3: Sumar tres valores\n");
    printf("Ingrese tres valores enteros: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    suma_total = num1 + num2 + num3;
    printf("La suma total de %.2f, %.2f y %.2f es %.2f\n", num1, num2, num3, suma_total);
    return 0; 
}