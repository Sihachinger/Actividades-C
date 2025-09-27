//Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio de los valores pares y el promedio de los valores impares. Luego mostrar por pantalla cuantos números superaron el valor 15.

#include <stdio.h>
#include <ctype.h>

int main() {
    int valor, pares = 0, impares = 0, superiores = 0;
    float promedioGeneral, promedioPares, promedioInpares;
    for (int i = 0; i <= 7; i++){
        printf("Ingrese el número %d: ", i + 1);

        scanf("%d", &valor);

        if (valor > 15) {
            superiores++;
        }
        if (valor % 2 == 0) {
            promedioPares += valor;
            pares++;
        } else {
            promedioInpares += valor;
            impares++;
        }
            promedioGeneral += valor;
    } 

    printf("El promedio general es: %.2f\n", promedioGeneral / 8);
    printf("El promedio de los valores pares es: %.2f\n", promedioPares / pares);
    printf("El promedio de los valores inpares es: %.2f\n", promedioInpares / impares);
    printf("La cantidad de números que superaron el valor 15 fueron: %d\n", superiores);
    
    return 0;
}