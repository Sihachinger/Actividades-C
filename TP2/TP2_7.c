// 7. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo

#include <stdio.h>

int main() {
    float valor_hora, tiempo_trabajado, sueldo;

    printf("Ingrese el valor de la hora: ");
    scanf("%f", &valor_hora);
    printf("Ingrese el tiempo trabajado en horas: ");
    scanf("%f", &tiempo_trabajado);

    if (valor_hora > 0 && tiempo_trabajado > 0) {
        sueldo = valor_hora * tiempo_trabajado;

        if (tiempo_trabajado > 150) {
            sueldo += 200;
        } else if (tiempo_trabajado > 50) {
            sueldo += 100;
        }

        printf("El sueldo del empleado es: %.2f\n", sueldo);
    } else {
        printf("Entrada no válida. Por favor, ingrese valores validos.\n");
    }

    return 0;
}

/*
3           Incluir Bibliotecas
5           Inicio del programa
6           Declarar variables
8 - 11      Imprimir y pedir los valores
13 - 23     Validar las entradas, calcular el sueldo e imprimir el resultado
27          Return
28          Fin del programa
*/