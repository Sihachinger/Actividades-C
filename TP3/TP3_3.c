//Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio de los valores pares y el promedio de los valores impares. Luego mostrar por pantalla cuantos números superaron el valor 15.

#include <stdio.h>

int main() {
    float valor, promedioGeneral, promedioPares, promedioInpares, superiores;
    for (int i = 0; i < 10; i++){
        printf("Ingrese el número %d: ", i);
        scanf("%f", &valor);
        if (valor > 15) {
            superiores++;
        }
        if (valor % 2 == 0) {
            promedioPares += valor;
        } else {
            promedioInpares += valor;
        }
        promedioGeneral += valor;
    } 

    printf("El promedio general es: %f", promedioGeneral);
    printf("El promedio de los valores pares es: %f", promedioPares);
    printf("El promedio de los valores inpares es: %f", promedioInpares);
    printf("La cantidad de números que superaron el valor 15 fueron: %f", superiores);
    
    return 0;
}