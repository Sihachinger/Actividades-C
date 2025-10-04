// TP4 Ejercicio 6: En una carrera de autos se ingresan el número de auto y su tiempo, indicar e imprimir cuál ganó y cúal fue el último
#include<stdio.h>

int main() {
    
    int autoNum, mejorAuto, peorAuto;
    float tiempo, mejorTiempo, peorTiempo;
    
    printf ("Ingrese el número de auto:\n");
    scanf("%d", &autoNum);
    printf("Ingrese el tiempo del auto en minutos\n");
    scanf("%f", &tiempo);
    
    
    mejorAuto = peorAuto = autoNum;
    mejorTiempo = peorTiempo = tiempo;
    
    while (autoNum != 0) {
        if (mejorTiempo > tiempo) {
            mejorTiempo = tiempo;
            mejorAuto = autoNum;
        }
        if (peorTiempo < tiempo) {
            peorTiempo = tiempo;
            peorAuto = autoNum;
        }
        printf("Ingrese el número de auto o 0 para terminar:\n");
        scanf("%d", &autoNum);
        if(autoNum != 0){
            printf("Ingrese el tiempo del auto en minutos:\n");
            scanf("%f", &tiempo);
        }
    }
    printf("El ganador fue el auto %d con un tiempo de %.2f\nEl último auto fue el %d con un tiempo de %.2f\n", mejorAuto, mejorTiempo, peorAuto, peorTiempo);
}