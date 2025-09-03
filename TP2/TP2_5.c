//5. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de estas sumas es mayor

#include <stdio.h>

int main() {
    float valor1, valor2, valor3, valor4;

    printf("Ingrese el primer valor: ");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%f", &valor3);
    printf("Ingrese el cuarto valor: ");
    scanf("%f", &valor4);

    if ((valor1 + valor2) > (valor3 + valor4)) {
        printf("La suma de \"%.2f\" y \"%.2f\" es mayor.\n", valor1, valor2);
    } else {
        printf("La suma de \"%.2f\" y \"%.2f\" es mayor.\n", valor3, valor4);
    }

    return 0;
}

/*
3           Incluir Bibliotecas
5           Inicio del programa
6           Declarar variables
8 - 15      Imprimir y pedir los valores
17 - 21     Calcular la suma e imprimir el resultado
23          Return
24          Fin del programa
*/