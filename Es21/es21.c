#include <stdio.h>

//dato un array di interi si scriva una procedura che elimini gli eventuali elementi ripetuti

#define dim 10

int findValueIndex(int array[],int n,int startIndex,int value)
{
    int valueIndex;
    int doppio=0; //indicatore se trovato doppio
    for (int i = startIndex; i < n; i++)
    {
        if(valueIndex==array[i])
        {
            doppio=1;
            return i;
        }
        else
        {
            return 0;
        }
    }
    
    
}

void deleteDoubles(int array[],int n)
{
    int found=1;
    int startIndex; //dal valore temporaneo in poi
    for (int i = 1; i < n; i++)
    {
        int tempval=array[i];
        startIndex=i+1;
        found=findValueIndex(array,n,tempval,startIndex);
        if(found!=0)
        {
            //elimino, traslando, l'indice trovato, diminuisce la dimensione logica del vettore
        }

    }
    



}


int fill(int array[])
{
    int n; //numero effettivo valori
    printf("inserire numero di valori da aggiungere\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("inserire valore %d  -> \n",i);
        scanf("%d",&array[i]);
    }
    return n;
}




int main()
{
    int array[dim];
    int arrayBuffer[dim];
    int logicIndex=fill(array);
    deleteDoubles(array,logicIndex);






    return 0;
}