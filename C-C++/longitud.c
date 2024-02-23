#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Escribe un programa que reciba 10 palabras y las ordene de menor a mayor longitud

int main(void) {
//Defino el vector de punteros
  char *words[10];
  char aux[20];
//Defino el resto de las variables
  int cont;
  int longitud;

//Leo las palabras mediante un bucle for
  for(cont=0;cont<10;cont++){
    printf("\nDame la palabra %d: ",cont+1);
    scanf( "%s",aux);//Leemos la palabra
    longitud=strlen(aux);//Contamos las letras
    words[cont]=(char*) malloc(sizeof(char)*longitud);//reservo memoria para el nombre de la longitud que va a ocupar
    strcpy(words[cont],aux);//Guardo la palabra en el vector de punteros
    printf("\nHe copiado %s", *(words+cont));//Muestro el nombre desde su ultima ubicación
  }

//Muestro las listas tal cual
  for(cont=0;cont<10;cont++){
    printf("\nHe copiado %s", *(words+cont));
  }

//Ordeno la lista por su longitud
  for(cont=0;cont<10;cont++){
    for(int i=0;i<10;i++){
      if(strlen(words[cont])<strlen(words[i])){
        strcpy(aux, words[cont]);
        strcpy(words[cont], words[i]);
        strcpy(words[i], aux);
        }
      }
    }
  //Vuelvo a mostrar la lista ordenada
  for(cont=0;cont<10;cont++)
    printf("\n%s",*(words+cont));
  return 0;
}
