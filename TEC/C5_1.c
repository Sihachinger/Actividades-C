// En base de un numero del 1 a 5 que se ingresa por teclado, decir que dia es.

#include <stdio.h>

int main() {
    int dia;
    printf("Ingrese un número del 1 al 5 para saber que día es: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        default:
            printf("Número inválido. Por favor ingrese un número entre 1 y 5.\n");
    }

    return 0;
}