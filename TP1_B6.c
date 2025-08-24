// B6. Ingresar los lados de un rectángulo y calcular su diagonal principal, superficie y perímetro. Imprima los resultados solicitados.

#include <stdio.h>
#include <math.h>

int main () {
    float base, altura, diagonal, superficie, perimetro;
    printf("Ejercicio 6: Calcular diagonal, superficie y perímetro de un rectángulo\n");
    printf("Ingrese la base y la altura del rectángulo: ");
    scanf("%f %f", &base, &altura);
    diagonal = (float)sqrt(base * base + altura * altura);
    superficie = base * altura;
    perimetro = 2 * (base + altura);
    printf("La diagonal es %.2f, la superficie es %.2f y el perímetro es %.2f\n", diagonal, superficie, perimetro);
    return 0;
}
