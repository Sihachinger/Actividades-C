// B4. Ingresar los lados de un triángulo, calcular su perímetro e imprimirlo.

#include <stdio.h>

int main () {
    float lado1, lado2, lado3, perimetro;
    printf("Ejercicio 4: Calcular el perímetro de un triángulo\n");
    printf("Ingrese los tres lados del triángulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    perimetro = lado1 + lado2 + lado3;
    printf("El perímetro del triángulo es %.2f\n", perimetro);
    return 0;
}