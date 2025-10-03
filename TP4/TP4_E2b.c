// TP4 Ejercicio 2b: Sobre el ejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive.imprimir el resultado
#include <stdio.h>

int main () {
    int facturaNum = 1, contador = 0, importesMayores = 0, importesRegulares = 0;
    float importe = 0, suma = 0, promedio = 0;

    printf("Ingrese el numero de la factura o 0 para finalizar\n");
    scanf("%d", &facturaNum);
        

    while (facturaNum != 0) {
        
        printf("Ingrese el importe de la factura:\n");
        scanf("%f", &importe);
    
        if (importe > 1000) {
            importesMayores++;
            printf("La factura número %d tiene un importe mayor a 1000\n");
        }
        
        if (importe >= 400 && importe <= 700) {
            importesRegulares++;
            printf("La factura número %d tiene un importe entre 400 y 700\n");
        }
        
        suma += importe;
        contador++;
        
        printf("Ingrese el numero de la siguiente factura o 0 para finalizar\n");
        scanf("%d", &facturaNum);
        
    }
    
    if (contador != 0) {
        printf("La suma de todos los importes es de: %.2f\n, %d fueron mayores a 1000 y %d fueron entre 400 y 700", suma, importesMayores, importesRegulares);
        return 0;
    } else {
        printf("Usted no ha ingresado ningún importe\n");
        return 0;
    }
}