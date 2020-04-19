#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct compu {
    int velocidad;//entre 1 y 3 Gherz
    int anio;//entre 2000 y 2017
    int cantidad;//entre 1 y 4
    char *tipo_cpu;//valores del arreglo tipos
} compu;

compu cargarPc(compu pc);
void funcionPuntero(compu *pc);
void mostrar(compu nueva);

int main(int argc, char const *argv[])
{
    char tipos[6][10]= {"Intel","AMD", "Celeron", "Athlon", "Core", "Pentium"};
    char *tipo_cpu;
    tipo_cpu= &tipos[0][10];
    compu *pCompu, nueva, pc;
    int cantidad;

    printf("Ingresa la cantidad de computadoras: ");
    scanf("%d", &cantidad);
    pCompu=(compu *) malloc(sizeof(compu) * cantidad);

    nueva=cargarPc(pc);
    mostrar(nueva);
    funcionPuntero(pCompu);
    free(pCompu);
    return 0;
}

compu cargarPc(compu pc)
{
    int tipo;
    srand(time(NULL));
    pc.velocidad=rand()%4+1;
    pc.anio=rand()%18+2000;
    pc.cantidad=rand()%5+1;
    return pc;
}
void funcionPuntero(compu *pc)
{
    for (int i = 0; i < (sizeof(pc)); i++)
    {
        
    }
    
}
void mostrar(compu nueva)
{
    printf("la velocidad es %d\n", nueva.velocidad);
    printf("el anio de fabricacion es %d \n", nueva.anio);
    printf("la cantidad es %d \n", nueva.cantidad);
}