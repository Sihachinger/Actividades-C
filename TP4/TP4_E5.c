// TP4 Ejercicio 5: Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor

#include<stdio.h>

int main() {
    
    float temperatura, max, min;
    
    printf("ingrese una temperatura:\n");
    scanf("%f", &temperatura);
    max = temperatura;
    min = temperatura;
    
    while (temperatura != 1000) {
        
        if (temperatura > max) {
            max = temperatura;
        }
        
        if (temperatura < min) {
            min = temperatura;
        }
        
        printf("ingrese otra temperatura o escriba 1000 para terminar:");
        scanf("%f", &temperatura);
    }
    
    printf("La mayor temperatura es %.2f y la menor es %.2f", max, min);
    return 0;
    
}