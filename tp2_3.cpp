#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 15
//#define COLUMNAS rand()%11 profe se podria hacer esa asignacion del numero aleatorio?? 

int main(int argc, char const *argv[])
{
    int columnas;
    srand(time(NULL));
    columnas = rand()%10+5;
    //printf("%d %d", FILAS, columnas);

    int matriz[FILAS][columnas], contadorPares=0;
    int *pMatriz, *cantidadPares;

    cantidadPares = (int *) malloc(sizeof(int)*FILAS);

    for (int i = 0; i < FILAS; i++)
    {
        pMatriz = (int *) malloc (sizeof(int) * columnas);
        for (int j = 0; j < columnas; j++)
        {
            //matriz[i][j]=rand()%1000+100;
            *(pMatriz+j)=rand()%1000+100;
            printf("%4d ",*(pMatriz+j) );
            if ((*(pMatriz+j) % 2) == 0)
            {
                contadorPares++;
            }   
        }
        *(cantidadPares+i) = contadorPares;
        contadorPares=0; 
        printf("\n");
    }
    
    printf("\n");
    
    for (int i = 0; i < FILAS; i++)
    {
        printf("%3d",*(cantidadPares+i));
    }
    

    free(pMatriz);
    free(cantidadPares); 
    return 0;
}
