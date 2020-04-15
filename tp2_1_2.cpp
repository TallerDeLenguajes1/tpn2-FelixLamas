#include <stdio.h>
#include <iostream>
#define N 4
#define M 5

int main(int argc, char const *argv[])
{   

  int f,c;
  double mt[N][M], *puntero;
  puntero = &mt[0][0];

    for(f = 0;f<N; f++)
    {
        for(c = 0;c<M; c++)
        {
        printf("%lf " ,*(puntero++) );
        }
        printf("\n");
    }

   return 0;
}