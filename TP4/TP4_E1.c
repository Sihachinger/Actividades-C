// TP4 Ejercicio 1: Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados

#include <stdio.h>

int main () {
    int bucle = 0, contador = 0;
    float sueldo = 0, suma = 0, promedio = 0;

    while (bucle == 0) {
    printf("Ingrese el sueldo del empleado\n");
    scanf("%f", &sueldo);
    suma += sueldo;
    contador++;
    printf("Si desea seguir agregando sueldos aprete 0, en caso contrario 1:\n");
    scanf("%d", &bucle);
    }
    
    if (contador != 0) {
        promedio = suma / contador;
        printf("La suma de todos los sueldos es de: %.2f\nEl promedio de todos los sueldos es %.2f\n", suma, promedio);
        return 0;
    } else {
        printf("Usted no ha ingresado ningún sueldo\n");
        return 0;
    }
}
