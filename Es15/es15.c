//scrivere un programma che legga da tastiera un numero N di dati da inserire (N max 10)
//si ricopino su un secondo array i soli valori posotivi, i dati nell'array devono essere in celle consecutive

#define dim 10
#include <stdio.h>

int main()
{
    int value=0;
    int N[dim];
    int Np[dim];
    int Np_index=0;

    for (int i = 0; i < dim; i++)
    {
       printf("inserire valore\n");
       scanf("%d",&value);
       N[i]=value;
       if(value>0){
        Np[Np_index]=value;
        Np_index++;
       }
    }
//stampa array pos
    printf("Stampa array di valori positivi\n");
    for (int j = 0; j < Np_index; j++)
    {
        printf("%d\n",Np[j]);
    }
    return 0;
}