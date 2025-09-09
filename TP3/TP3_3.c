//Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio de los valores pares y el promedio de los valores impares. Luego mostrar por pantalla cuantos números superaron el valor 15.

#include <stdio.h>
#include <ctype.h>

int main() {
    int valor;
    float promedioGeneral, promedioPares, promedioInpares, superiores;
    for (int i = 0; i < 10; i++){
        printf("Ingrese el número %d: ", i + 1);

        // Validar que se ingrese un número entero con isdigit función de ctype.h que verifica si el carácter es un dígito entre '0' y '9'.
        scanf("%d", &valor);
        if (isdigit(valor)){
            if (valor > 15) {
            superiores++;
            }
            //No me deja utilizar el operador ya que es un float y c no me lo deja hacer.
            if (valor % 2 == 0) {
                promedioPares += valor;
            } else {
                promedioInpares += valor;
            }
            promedioGeneral += valor;
        } else {
            printf("El valor ingresado no es valido, por favor ingrese números enteros.\n");
            i--;
            continue;
        }
    } 

    printf("El promedio general es: %f", promedioGeneral);
    printf("El promedio de los valores pares es: %f", promedioPares);
    printf("El promedio de los valores inpares es: %f", promedioInpares);
    printf("La cantidad de números que superaron el valor 15 fueron: %f", superiores);
    
    return 0;
}