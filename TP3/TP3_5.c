//Ingresarla patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos superan los $ 40 y del total cobrado que porcentaje representa la suma de los que superan los $40.

#include <stdio.h>

int main() {
    char patente[50];
    float monto, sumaTotal = 0, sumaSuperan40 = 0;
    int contadorSuperan40 = 0;

    for (int i = 0; i < 50; i++) {
        printf("Ingrese la patente del auto %d: ", i + 1);
        scanf("%s", patente);
        printf("Ingrese el monto de la multa numero %d: ", i + 1);
        scanf("%f", &monto);

        sumaTotal += monto;
        if (monto > 40) {
            contadorSuperan40++;
            sumaSuperan40 += monto;
        }
    }

    float porcentajeSuperan40 = (sumaTotal > 0) ? (sumaSuperan40 / sumaTotal) * 100 : 0;

    printf("Cantidad de multas que superan los $40: %d\n", contadorSuperan40);
    printf("Porcentaje del total cobrado que representan las multas que superan los $40: %.2f\n", porcentajeSuperan40);

    return 0;
}