// Realizar por medio de un for un algorito para ingresar temperaturas, que se le pregunte al principio al usuario cuantas temperaturas quiere ingresar, y luego de ingresarlas todas, se le informe cual fue la temperatura mas alta y cual fue la mas baja.

#include <stdio.h>

int main() {
    int n, i;
    float temperatura, maxTemp, minTemp;

    printf("¿Cuántas temperaturas desea ingresar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número no válido. Por favor ingrese un número positivo.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Ingrese la temperatura %d: ", i + 1);
        scanf("%f", &temperatura);

        if (i == 0) {
            maxTemp = temperatura;
            minTemp = temperatura;
        } else {
            if (temperatura > maxTemp) {
                maxTemp = temperatura;
            }
            if (temperatura < minTemp) {
                minTemp = temperatura;
            }
        }
    }

    printf("La temperatura más alta es: %.2f\n", maxTemp);
    printf("La temperatura más baja es: %.2f\n", minTemp);

    return 0;
}