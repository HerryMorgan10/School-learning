#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //DEFINICIÓN DE VARIABLES
  int tirada;
  int puntuacion[2];
  int jugador;
  int seed;
  int aleatorio;
  int dado;
  //PONEMOS A CERO LOS MARCADORES
  puntuacion[0]=0;
  puntuacion[1]=0;

  //INICIALIZACIÓN DEL GENERADOR DE NÚMEROS PSEUDOALEATORIOS
  seed=time(0);
  srand(seed);
  //PARTIDA
  for(tirada=1;tirada<=3;tirada++){
    for(jugador=1;jugador<=2;jugador++){
      dado=rand()%6+1;
      printf("\nJUGADOR %d=%d",jugador,dado);
      puntuacion[jugador-1]=puntuacion[jugador-1]+dado;//puntuacion_1 +=dado
    }
  }
  //GANADOR
   if(puntuacion[0]>puntuacion[1]){
     printf("\nGANA EL JUGADOR 1 CON %d",puntuacion[0]);
   }
   if(puntuacion[1]>puntuacion[0]){
     printf("\nGANA EL JUGADOR 2 CON %d",puntuacion[1]);
   }
   if(puntuacion[0]==puntuacion[1]){
     printf("\nEMPATE");
   }
  return 0;
}
