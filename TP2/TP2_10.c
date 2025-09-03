// 10. Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con más de 5 años de antigüedad

include <stdio.h>

int main() {
    int cantidad_trabajadores;
    char nombre[100][50];
    float sueldo[100];
    int categoria[100], antiguedad[100];

    printf("Ingrese la cantidad de trabajadores: \n");
    scanf("%d", &cantidad_trabajadores);

    for (int i = 0; i < cantidad_trabajadores; i++) {
        printf("Ingrese el nombre, sueldo, categoría y antigüedad del trabajador %d separado por espacios:\n", i + 1);
        scanf("%s %f %d %d", nombre[i], &sueldo[i], &categoria[i], &antiguedad[i]);
    }

    for (int i = 0; i < cantidad_trabajadores; i++) {
        If (antigüedad[i] >= 5){
            printf("Trabajador %d: %s, Sueldo: %.2f, Categoría: %d, Antigüedad: %d años\n", i + 1, nombre[i], sueldo[i], categoria[i], antiguedad[i]);
        }
    }

    return 0;
}
