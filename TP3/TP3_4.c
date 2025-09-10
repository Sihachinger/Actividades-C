//Ingresar 30 valores. Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre 20 y 30 y cuantos son más de 30. Luego mostrar el porcentaje de cada grupo en el total.

#include <stdio.h>
#include <stdbool.h>

// Aprendimos a utilizar funciones, punteros y manejo de errores en la entrada de datos.
float ingresarValores(int *);
float ingresarValores(int *i) {
    float valor;
    for (int j = 0; j < 1; j++) {
        printf("Ingrese el número %d: ", *i + 1); 
        if (scanf("%f", &valor) != 1) {
            printf("Entrada no válida. Por favor ingrese un número entero.\n");
            while (getchar() != '\n');
            (*i)--;
            continue;
        }
        if (valor != (int)valor) {
            printf("Por favor ingrese un número entero.\n");
            (*i)--;
            continue;
        }
        break;
    }
    return valor;
}

int main() {
    float valor;
    int entre1y10 = 0, entre11y20 = 0, entre21y30 = 0, mayor30 = 0, menorIgual0 = 0;
    for (int i = 0; i < 30; i++) {

        valor = ingresarValores(&i);

        if (valor >= 1 && valor <= 10) {
            entre1y10++;
        } else if (valor > 10 && valor <= 20) {
            entre11y20++;
        } else if (valor > 20 && valor <= 30) {
            entre21y30++;
        } else if (valor > 30) {
            mayor30++;
        } else if (valor <= 0) {
            menorIgual0++;
        } else {
            printf("El valor ingresado no es valido, por favor ingrese números enteros.\n");
            i--;
            continue;
        }
    }
    printf("Hay %d valores entre 1 y 10, con un porcentaje de %.2f%%\n", entre1y10, (entre1y10 / 30.0)*100 );
    printf("Hay %d valores entre 11 y 20, con un porcentaje de %.2f%%\n", entre11y20, (entre11y20 / 30.0)*100);
    printf("Hay %d valores entre 21 y 30, con un porcentaje de %.2f%%\n", entre21y30, (entre21y30 / 30.0)*100);
    printf("Hay %d valores mayores de 30, con un porcentaje de %.2f%%\n", mayor30, (mayor30 / 30.0)*100);
    printf("Hay %d valores menores o igual a 0, con un porcentaje de %.2f%%\n", menorIgual0, (menorIgual0 / 30.0)*100);
}