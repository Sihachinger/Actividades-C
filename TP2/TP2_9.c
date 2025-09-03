// 9. Ingresar el sueldo, categoría y antigüedad de un empleado, calcular el sueldo final de cada uno de ellos, si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad.

#include <stdio.h>

int main() {
    float sueldo, sueldoFinal;
    int categoria, antiguedad;

    printf("Ingrese el sueldo del empleado, seguido de la categoria (1-3) y la antiguedad (en años) todo separado por espacios: ");
    scanf("%f %d %d", &sueldo, &categoria, &antiguedad);

    //Pense en poner mas categorias como para usar el switch que lo mostro en la ultima clase, sino las categorias son medio sin sentido ya que siempre va a ser categoria uno segun la consigna.

    switch (categoria) {
        case 1:
            sueldoFinal = sueldo + (50 * antiguedad);
            break;
        case 2:
            sueldoFinal = sueldo + (30 * antiguedad);
            break;
        case 3:
            sueldoFinal = sueldo + (20 * antiguedad);
            break;
        default:
            printf("Categoria no valida.\n");
            return 0;
    }

    printf("El sueldo final del empleado es: %.2f\n", sueldoFinal);
    return 0;
}