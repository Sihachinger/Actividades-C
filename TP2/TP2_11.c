// 11. Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80

#include <stdio.h>

int main() {
    float sueldo = 0;
    int categoria, antiguedad, horas = 0;

    printf("Ingrese las horas trabajadas y la categoria separado por espacios: ");
    scanf("%d %d", &horas, &categoria);

    switch (categoria) {
        case 1:
            sueldo = horas * 50;
            break;
        case 2:
            sueldo = horas * 70;
            break;
        case 3:
            sueldo = horas * 80;
            break;
        default:
            printf("Categoria no valida.\n");
            return 0;
    }

    printf("El sueldo del emleaado es de: %.2f\n", sueldo);
    return 0;
}