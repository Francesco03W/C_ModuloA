//conoscendo la posizione del re e della regina, controllare se la regina fa scacco


#include <stdio.h>

int main()
{
    int Xk,Yk=0;
    int Xq,Yq=0;

    printf("inserire la posizione X del re\n");
    scanf("%d",&Xk);

    printf("inserire la posizione Y del re\n");
    scanf("%d",&Yk);
    
    printf("inserire la posizione X della regina\n");
    scanf("%d",&Xq);

    printf("inserire la posizione Y della regina\n");
    scanf("%d",&Yq);
    //per controllare che sia in diagonale, se si usano cicli, in base alla dimensione della scacchiera ci può essere
    // un tempo di calcolo troppo elevato, meglio usare una soluzione matematica.
    //è sconsigliabile usare la divisione

    //si usa il coefficiente angolare della retta passante per i due punti, se è 1 allora sono sulla stessa diagonale
    if((Xk==Xq)||(Yk==Yq)||(Yk-Yq)==(Xk-Xq))
    {
        printf("Scacco");
    }
    
    return 0;
}