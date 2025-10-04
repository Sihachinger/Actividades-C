// TP4 Ejercicio 3: Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros
#include <stdio.h>

int main () {
    int positivos = 0, negativos = 0, ceros = 0, total = 0, bucle = 1;
    float valor, promPositivos = 0, promNegativos = 0;
    
    do {
        printf("Ingrese un valor:\n");
        scanf("%f", &valor);
    
        if (valor > 0) {
            positivos++;
            promPositivos += valor;
        } else if (valor < 0) {
            negativos++;
            promNegativos += valor;
        } else {
            ceros++;
        }
    
        printf("Si desea ingresar otro valor aprete 1 sino aprete 0");
        scanf("%d", &bucle);
    } while (bucle == 1);
    
    
    promPositivos /= positivos ;
    promNegativos /= negativos;
    
    printf("El promedio de positivos es: %.2f\nEl promedio de negativos es %.2f\nCantidad de ceros: %d\n", promPositivos, promNegativos, ceros);
    return 0;
}