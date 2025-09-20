// B2. Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos operandos a la vez.

#include <stdio.h>

int main () {
    float num1, num2, num3, sumaTotal;
    printf("Ejercicio 2: Sumar tres valores\n");
    printf("Ingrese tres valores: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    sumaTotal = num1 + num2;
    sumaTotal = sumaTotal + num3;
    printf("La suma total de %.2f, %.2f y %.2f es %.2f\n", num1, num2, num3, sumaTotal);
    return 0;
}