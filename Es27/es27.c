//5/12/2022
//Esercizio 6 : Matrice Somma

/*Scrivere un programma per calcolare la somma tra due matrici
Il programma deve inizialmente leggere da tastiera le due matrici, tramite una funzione da invocare due volte
una per ogni matrice
La funzione di lettura deve chiedere all'utente le dimensioni di una matrice ( numero di righe e colonne)
e deve poi fargli inserire i valori. Si supponga che le matrici abbiano dimensione massima 20x20
Se non sono verificate le condizioni per la somma il programma deve stampare un messaggio d'errore
Se invece sono verificate, il programma calcola la somma tramite una funzione e la stampa a video tramite una funzione

*/
#define dim 20
#include <stdio.h>
#include <stdlib.h>

void matrixPrint(int *sizerA,int *sizecB, int Ma[][dim])
{
    for (int i = 0; i < *sizerA; i++)
    {
        for (int j = 0; j < *sizecB; j++)
        {
            printf("%d ",Ma[i][j]);
            
        }
        printf("\n");
    }
}

void matrixSum(int sizerA,int sizecB,int Ma[][dim],int Mb[][dim],int Mris[][dim])
{
    for (int i = 0; i < sizerA; i++)
    {
        for (int j = 0; j < sizecB; j++)
        {
            Mris[i][j]=Ma[i][j]+Mb[i][j];
        }
        
    }
    
}
void matrixInput(int *sizerA,int *sizecA,int *sizerB,int *sizecB, int MA[][dim],int MB[][dim])
{
    while((*sizerA>20 || *sizerA<=0)||(*sizecA>20 || *sizecA<=0)||(*sizerB>20 || *sizerB<=0)||(*sizecB>20 || *sizecB<=0))
    {
    printf("inserire il numero di righe della matrice A\n");
    scanf("%d",sizerA);

    printf("inserire il numero di colonne della matrice A\n");
    scanf("%d",sizecA);

    printf("inserire il numero di righe della matrice B\n");
    scanf("%d",sizerB);

    printf("inserire il numero di colonne della matrice B\n");
    scanf("%d",sizecB);

    printf("--------------------------------------------------------------------------");

    }

    //controllo somma, poi procedo all'inserimento delle matrici
    if(*sizerA!=*sizerB && *sizecA!=*sizecB)
    {
        printf("somma non possibile\n");
        exit(1);
    }



    //matrice A
    printf("inserimento matrice A\n");
    for (int i = 0; i < *sizerA; i++)
    {
        printf("RIGA %d, inserire i valori delle colonne uno per volta \n",i);
        for (int j = 0; j < *sizecA; j++)
        {
            scanf("%d",&MA[i][j]);
        }

    }
    
    //matrice B

    printf("inserimento matrice B\n");
    for (int i = 0; i < *sizerB; i++)
    {
        printf("RIGA %d, inserire i valori delle colonne uno per volta \n",i);
        for (int j = 0; j < *sizecB; j++)
        {
            scanf("%d",&MB[i][j]);
        }

    }


}

int main()
{
    int sizerA=0;
    int sizecA=0;

    int sizerB=0;
    int sizecB=0;
    
    int MatrixA[dim][dim];
    int MatrixB[dim][dim];
    int Mris[dim][dim];
    matrixInput(&sizerA,&sizecA,&sizerB,&sizecB,MatrixA,MatrixB);
    matrixSum(sizerA,sizecB,MatrixA,MatrixB,Mris);
    matrixPrint(&sizerA,&sizecB,Mris);


    return 0;
}






