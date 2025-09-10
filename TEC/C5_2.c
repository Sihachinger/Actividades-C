// En base al numero del mes que se ingresa por teclado, decir que estacion del año es.

#include <stdio.h>

int main() {
    int mes;
    printf("Ingrese un número del 1 al 12 para saber que estación del año es: ");
    scanf("%d", &mes);

    switch (mes) {
        case 12:
        case 1:
        case 2:
            printf("Verano\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Otoño\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Invierno\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Primavera\n");
            break;
        default:
            printf("Número inválido. Por favor ingrese un número entre 1 y 12.\n");
    }

    return 0;
}