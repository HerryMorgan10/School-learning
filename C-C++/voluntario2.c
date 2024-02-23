#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <string.h> 
typedef struct {
	double x;
	double y;
} PUNTO;



void imprimePunto(PUNTO* a);

PUNTO* reservaMemoria(int n);

int main()
{
	int n;
	PUNTO* puntos = NULL; 
		
	printf("Cuantos puntos quieres? ");
	scanf("%d",&n);
	
	puntos = (PUNTO*) malloc(n * sizeof(PUNTO));

	
	srand(time(NULL));
	for (int i=0;i<n;i++) {
		puntos[i].x = rand() % 16;
		puntos[i].y = rand() % 16;
		printf("Punto %d: ",i+1);
		imprimePunto(puntos+i);
		printf("\n");
	}
	printf("-------------------\n");

	
	PUNTO* masPuntos = (PUNTO*) calloc(n,sizeof(PUNTO)); 
	
	for (int i=0;i<n;i++) {
		imprimePunto(&masPuntos[i]);
		printf("\n");
		
	}
	

	
	masPuntos = (PUNTO*) realloc(masPuntos, 4*n*sizeof(PUNTO)); 
	

	PUNTO* aunMasPuntos = reservaMemoria(n); 
	
	free(puntos);
	free(masPuntos);
	free(aunMasPuntos);
	
	return 0;
}


void imprimePunto(PUNTO* a) {
	printf("(%lf,%lf)",a->x,a->y);
}

PUNTO* reservaMemoria(int n)
{
	PUNTO* v = (PUNTO*)malloc(n*sizeof(PUNTO));
	memset(v,0,n*sizeof(PUNTO));

	return v;
}
