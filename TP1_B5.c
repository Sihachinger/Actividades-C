// 5. Ingresar dos lados de un triángulo rectángulo y calcular la hipotenusa, el perímetro, la superficie. Imprima los resultados solicitados.

#include <stdio.h>
#include <math.h>

int main () {
    float cateto1, cateto2, hipotenusa, perimetro, superficie;
    printf("Ejercicio 5: Calcular hipotenusa, perímetro y superficie de un triángulo rectángulo\n");
    printf("Ingrese los dos catetos del triángulo rectángulo: ");
    scanf("%f %f", &cateto1, &cateto2);
    hipotenusa = (float)sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    perimetro = cateto1 + cateto2 + hipotenusa;
    superficie = (cateto1 * cateto2) / 2;
    printf("La hipotenusa es %.2f, el perímetro es %.2f y la superficie es %.2f\n", hipotenusa, perimetro, superficie);
    return 0;
}