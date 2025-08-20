// B9. Ingresar el tiempo trabajado por un operario y considerando que el valor por hora es de 10 pesos, calcular su sueldo.

#include <stdio.h>

int main () {
    int valor_hora = 10;
    float sueldo, horas;
    printf("Ejercicio 9: Calcular sueldo de un operario con valor de 10 pesos la hora\n");
    printf("Ingrese el tiempo trabajado (en horas): ");
    scanf("%f", &horas);
    sueldo = valor_hora * horas;
    printf("El sueldo del operario es %.2f pesos\n", sueldo);
    return 0;
}
