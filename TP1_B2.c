// B2. Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos operandos a la vez.

#include <stdio.h>

int main () {
    float num1, num2, num3, suma_total;
    printf("Ejercicio 2: Sumar tres valores\n");
    printf("Ingrese tres valores enteros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    suma_total = num1 + num2;
    suma_total = suma_total + num3;
    printf("La suma total de %.2f, %.2f y %.2f es %.2f\n", num1, num2, num3, suma_total);
    return 0;
}
