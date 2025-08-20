//Ingresar tres valores, suimarlos e imprimir esa suma, se puede sumar de a varios operandos en la misma operación

#include <stdio.h>

int main () {
    int num1, num2, num3, suma_total;
    printf("Ejercicio 3: Sumar tres valores\n");
    printf("Ingrese tres valores enteros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    suma_total = num1 + num2 + num3;
    printf("La suma total de %d, %d y %d es %d\n", num1, num2, num3, suma_total);
    return 0; 
}
