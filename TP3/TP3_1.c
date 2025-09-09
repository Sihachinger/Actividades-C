//Ingresar 25 números, calcular su promedio e imprimirlo

#include <stdio.h>

int main() {
    float promedio, numero, suma = 0;
    for (int i = 0; i < 25; i++) {
        printf("Ingrese un numero: ");
        scanf("%f", &numero);
        suma += numero;
    }
    promedio = suma / 25;
    printf("El promedio de todos los números es: %.2f\n", promedio);
    return 0;
}

/*
1       Enunciado
2       Bibliotecas
5       Funcion main      
6       Declaracion de variables
7-11    Ingreso de datos y calculo de la suma
12-13   Calculo del promedio
14      Impresion del resultado
15      Fin del programa
*/