// 7. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo

#include <stdio.h>

int main() {
    float valorHora, tiempoTrabajado, sueldo;

    printf("Ingrese el valor de la hora: ");
    scanf("%f", &valorHora);
    printf("Ingrese el tiempo trabajado en horas: ");
    scanf("%f", &tiempoTrabajado);

    if (valorHora > 0 && tiempoTrabajado > 0) {
        sueldo = valorHora * tiempoTrabajado;

        if (tiempoTrabajado > 150) {
            sueldo += 200;
        } else if (tiempoTrabajado > 50) {
            sueldo += 100;
        }

        printf("El sueldo del empleado es: %.2f\n", sueldo);
    } else {
        printf("Entrada no válida. Por favor, ingrese valores validos.\n");
    }

    return 0;
}