// 8. Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida, considerar los años bisiestos

#include <stdio.h>

int main() {
    int dia, mes, diasEnMes, anio;

    printf("Ingrese una fecha con el siguiente formato: dd mm aaaa: ");
    scanf("%d %d %d", &dia, &mes, &anio);

    if (anio < 0) {
        printf("Año no válido.\n");
        return 0;
    }

    if (mes < 1 || mes > 12) {
        printf("Mes no válido.\n");
        return 0;
    }

    if (mes == 2) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) { // Explicacion: un año es bisiesto si es divisible por 4, pero no por 100, o si es divisible por 400
            diasEnMes = 29;
        } else {
            diasEnMes = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasEnMes = 30;
    } else {
        diasEnMes = 31;
    }

    if (dia < 1 || dia > diasEnMes) {
        printf("Día no válido.\n");
        return 0;
    }

    printf("La fecha %d / %d / %d es correcta", dia, mes, anio);
    return 0;
}