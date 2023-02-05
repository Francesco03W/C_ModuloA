
#include <stdio.h>
#define dim 43 //22 è il valore centrale tra 0 e 42

int main()
{
    char riga[dim];
    int N=-1;
    int dxIndex=0;
    int sxIndex=0;
    int centralIndex=22;

    while(N<0)
    {
        printf("Inserire numero di righe da stampare\n");
        scanf("%d",&N);
    }

    for (int i = 0; i < N; i++)
    {
    //devo settare tutto l'array a valori vuoti cioè ' ' perché altrimenti mi stampa valori predefiniti assegnati dal compilatore
    //questo normalmente non è necessario, ma in questo caso noi stampiamo TUTTO l'array ogni volta, includendo le "celle" non occupate dalle x
    
    //normalmente bisognerebbe tenere conto delle celle effettivamente utilizzate (dall'indice 0 all'ULTIMO valore INSERITO ) 
    // chiamato dimensione logica, cioè:
    // CHE NON PERFORZA corrisponde con l'ultimo indice dell'array, la dimensione effeettiva dell'array nel programma di DIM celle è la dimensione fisica
        for (int o = 0; o < dim; o++)
        {
            riga[o]=' ';
        } //ora l'array vuoto, lo riempio con le x giuste

        //la fila centrale è sempre segnata con x
        riga[centralIndex]='x'; 

        if(i!=0)
        {
            for (int k = 0; k <= i; k++)
            {
                dxIndex=centralIndex+k;
                sxIndex=centralIndex-k;

                riga[dxIndex]='x'; //cella a k celle a destra dal centro
                riga[sxIndex]='x'; //cella a k celle a sinistra dal centro
            }

        }
        
        printf("\n");
        
        for (int k = 0; k < dim; k++)
        {
            printf("%c",riga[k]);
        }
    }
    
    return 0;
}