//Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre 20 y 30 y cuantos son más de 30. Luego mostrar el porcentaje de cada grupo en el total.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define CANT 30
int main()
{
    int totalNumeros = 30;
    int indice, numeroIngresado, contadorRango1_10 = 0, contadorRango11_20 = 0, contadorRango21_30 = 0, contadorMayorA30 = 0;
    float porcentajeRango1_10, porcentajeRango11_20, porcentajeRango21_30, porcentajeMayorA30;
    for(indice = 0; indice < CANT; indice++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeroIngresado);
        if(numeroIngresado >= 1 && numeroIngresado <= 10)
        {
            contadorRango1_10++;
        }
        else
        {
            if(numeroIngresado > 10 && numeroIngresado <= 20)
            {
                contadorRango11_20++;
            }
            else
            {
                if(numeroIngresado > 20 && numeroIngresado <= 30)
                {
                    contadorRango21_30++;
                }
                else
                {
                    if(numeroIngresado > 30)
                    {
                        contadorMayorA30++;
                    }
                }
            }
        }
    }
    porcentajeRango1_10 = (contadorRango1_10 * 100) / CANT;
    porcentajeRango11_20 = (contadorRango11_20 * 100) / CANT;
    porcentajeRango21_30 = (contadorRango21_30 * 100) / CANT;
    porcentajeMayorA30 = (contadorMayorA30 * 100) / CANT;
    printf("El porcentaje de numeros entre 1 y 10 es: %.2f%%\n", porcentajeRango1_10);
    printf("El porcentaje de numeros entre 11 y 20 es: %.2f%%\n", porcentajeRango11_20);
    printf("El porcentaje de numeros entre 21 y 30 es: %.2f%%\n", porcentajeRango21_30);
    printf("El porcentaje de numeros mayores a 30 es: %.2f%%\n", porcentajeMayorA30);
    getch();
    return 0;
}