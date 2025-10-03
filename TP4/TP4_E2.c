// TP4 Ejercicio 2:Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan los $1000. Imprimir los resultados

#include <stdio.h>

int main () {
    int facturaNum = 1, contador = 0, importesMayores = 0;
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
        
        suma += importe;
        contador++;
        
        printf("Ingrese el numero de la siguiente factura o 0 para finalizar\n");
        scanf("%d", &facturaNum);
        
    }
    
    if (contador != 0) {
        printf("La suma de todos los importes es de: %.2f\n y fueron %d mayores a 1000", suma, importesMayores);
        return 0;
    } else {
        printf("Usted no ha ingresado ningún importe\n");
        return 0;
    }
}