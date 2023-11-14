#include <stdio.h> //Import en python
//Función principal o cuerpo principal def main():
//Tipos de datos: int -> Entero, float -> Númeor en coma flotante, char -> Letra.
int main(void) {        
    //Definimos las variables.
    int num1;
    int num2;
    int suma;
    //Instruccion de entrada: sacanf(), Instrucción de salida printf().
    //Equivale a num1=input("Dime un número: ").
    printf("\nDime un número: "); // \n para el cambio de linea.
    scanf("%d",&num1); //%d porque es entero

    printf("\nDime otro número: ");
    sacanf("%d",&num2);

    // Sumo ambos números
    suma=num1+num2;
    // Muestra en pantalla el resultado
    // printf(str(num1)+"+"+str(num2))
    printf(" %d + %d = %d",num1,num2,suma);

    return(0);
}
