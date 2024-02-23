#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h> 



int *creaMatriz(int filas, int columnas);
void inicializaMatriz(int* matriz, int filas, int columnas);
void sumaMatrices(int* m1, int* m2, int* m3, int filas, int columnas); // m3 = m1 + m2
void multiplicaMatrices(int* m1, int* m2, int* m3, int f1, int c1, int f2, int c2); 

void imprimeMatriz(int* matriz, int filas, int columnas);
void liberaMatriz(int* matriz);

int main()
{
	
	srand(time(NULL));
	
	int filas, columnas;
	
	printf("Numero de filas: ");
	scanf("%d",&filas);
	
	printf("Numero de columnas: ");
	scanf("%d",&columnas);

	int* m1 = creaMatriz(filas,columnas);
	int* m2 = creaMatriz(filas,columnas);
	int* m3 = creaMatriz(filas,columnas);
	int* m4 = creaMatriz(filas,columnas);
	
	inicializaMatriz(m1,filas,columnas);
	inicializaMatriz(m2,filas,columnas);
	
	printf("M1 =  \n");
	imprimeMatriz(m1, filas, columnas);
	printf("\nM2 = \n");
	imprimeMatriz(m2, filas, columnas);
	
	sumaMatrices(m1,m2,m3,filas,columnas);
	
	printf("\nM1 + M2 = \n");
	imprimeMatriz(m3,filas,columnas);
	
	multiplicaMatrices(m1,m2,m4,filas,columnas,filas,columnas);
	printf("\nM1 * M2 = \n");

	imprimeMatriz(m4,filas,columnas);
	
	liberaMatriz(m1);
	liberaMatriz(m2);
	liberaMatriz(m3);
	liberaMatriz(m4);
	
	return 0;
}

int* creaMatriz(int filas, int columnas)
{
	
	return (int*) malloc(filas*columnas*sizeof(int));
}

void inicializaMatriz(int* matriz, int filas, int columnas)
{
	// Para recorrer una matriz necesitamos dos bucles, uno anidado dentro del otro
	for (int i=0;i<filas;i++) {
		for (int j=0;j<columnas;j++) {
			matriz[i*columnas+j] = rand() % 16;
		}
	}
}

void imprimeMatriz(int* matriz, int filas, int columnas)
{
	for (int i=0;i<filas;i++) {
		for (int j=0;j<columnas;j++) {
			printf("%d\t",matriz[i*columnas+j]); // \t se usa para tabular
		}
		printf("\n");
	}
}

void sumaMatrices(int* m1, int* m2, int* m3, int filas, int columnas)
{
	for (int i=0;i<filas;i++) {
		for (int j=0;j<columnas;j++) {
			m3[i*columnas+j] = m1[i*columnas+j] + m2[i*columnas+j];
		}
	}
}

void multiplicaMatrices(int* m1, int* m2, int* m3, int f1, int c1, int f2, int c2)
{
	// Podemos asegurarnos que se cumplen ciertas condiciones con assert
	assert(c1==f2); // si no se cumple se produce un error en tiempo de ejecución
	
	for (int i=0;i<f1;i++) {
		for (int j=0;j<c2;j++) {
			m3[i*c2+j] = 0;
			for (int k=0;k<c1;k++) {
				m3[i*c2+j]+= m1[i*f1+k] * m2[k*f2+j];
			}
		}
	}
}

void liberaMatriz(int* matriz)
{
	free(matriz);
}
