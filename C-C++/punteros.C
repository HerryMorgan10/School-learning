
#include <stdio.h>
#include<string.h>

int main(void) {
  char *lista[2];
  char palabra1[10];
  char palabra2[10];
  int longitud;
  int cont;
  int coincidencias=0;
  //Leo la palabra
  printf("Palabra 1: ");
  scanf(" %s",palabra1);
  lista[0]=palabra1;
  lista[1]=palabra2;
  longitud=strlen(palabra1);
  for(cont=0;cont<longitud;cont++){
    palabra2[cont]=palabra1[(longitud-1)-cont];
  }
  printf("\nPalabra invertida: %s",lista[1]);
  for(cont=0;cont<longitud;cont++){
    if(palabra1[cont]==palabra2[cont])
      coincidencias++;
  }
  if(coincidencias==longitud)
    printf("\nSOn palindromos");
  else
    printf("\nNo son palindromos")
  return 0;
}
