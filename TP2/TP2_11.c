// 11. Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80


#include <stdio.h>

int main() {
    float sueldo;
    int categoria, antiguedad;

    printf("Ingrese la categoría del empleado y las horas trabajadas, separado por espacios: ");
    scanf("%f %d", &horas, &categoria);

    switch (categoria) {
        case 1:
            sueldo = horas * 50;
            break;
        case 2:
            sueldo = 70 * 50;
            break;
        case 3:
            sueldo = 80 * 50;
            break;
        default:
            printf("Categoria no valida.\n");
            return 0;
    }

    printf("El sueldo del emleaado es de: %.2f\n", sueldo);
    return 0;
}