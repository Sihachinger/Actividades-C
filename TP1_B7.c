// B7. Ingresar dos valores, calcular su suma, un producto y la resta del 1ro menos el 2do.

#include <stdio.h>

int main () {
    float num1, num2, suma, producto, resta;
    printf("Ejercicio 7: Calcular suma, producto y resta de dos valores\n");
    printf("Ingrese dos valores: ");
    scanf("%f %f", &num1, &num2);
    suma = num1 + num2;
    producto = num1 * num2;
    resta = num1 - num2;
    printf("La suma es %.2f, el producto es %.2f y la resta es %.2f\n", suma, producto, resta);
    return 0;
}
