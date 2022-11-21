//21/11/22 

//legge da tastiera un intero n e un array di n interi n<=10 tramite una funzione
//calcola l'indice del massimo dell'array tramite una funzione
//visualizza sullo schermo l'indice del massimo

#include <stdio.h>

#define dim 10

int fill(int array[])
{
    int n=0; //numero di valori effettivamente inseriti (logica)
    
    while(n<=0 || n>10)
    {
        printf("inserire il numero di valori nel vettore\n");
        scanf("%d",&n);
    }

    printf("inserire valori \n");
    for (int i = 0; i < n; i++)
    {
        printf("inserire il valore %d -> ",i);
        scanf("%d",&array[i]);
    }
    return n;
}

int maxArrayValueIndex(int array[],int n)
{
    int max=0;
    int maxIndex=0;

    for (int i = 0; i < n; i++)
    {
        if(max<array[i])
        {
            max=array[i];
            maxIndex=i;
        }
            
    }

return maxIndex;
}

int main()
{   int maxValueIndex;
    int array[dim];
    int logicIndex; //mi interesso solo dei valori effettivamente inseriti

    logicIndex=fill(array);
    maxValueIndex=maxArrayValueIndex(array,logicIndex);
    
    printf("Il valore massimo è di indice %d",maxValueIndex);


    return 0;
}