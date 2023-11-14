// En este ejercicio el programa me pregunta qué tabla deseo escribir
//  ME la escribe con el formato

// Tabla del 3

// 3 x 1 = 3
// 3 x 2 = 6

#include <stdio.h>

int main(void)
{
    // Definición de variables
    int n_tabla;
    int producto;
    int cont;
    // Instruccion entrada/salida
    printf("Que tabla deseas que te muestre(1-10): ");
    scanf("%d", &n_tabla);
    printf("*****************************");
    printf("*   TABLA DEL %d    *", n_tabla);
    printf("*****************************");

    // Creamos un bucle
    for (cont = 1; cont <= 10; cont++)
    {
        producto = n_tabla * cont;
        printf("%d x %d = %d\n", n_tabla, cont, producto);
    }; // cont++ significa cont=cont+1

    // Tiene que tener proceso
    // Y mostrarlo por pantalla

    return 0;
}
