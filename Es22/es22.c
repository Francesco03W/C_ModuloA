//Es 10 Album figurine (ESAME)

#include <stdio.h>
#define dim 26
#define n_bust 11
//album figurine da 25 posti (figurine numerate da 1 a 25)
// gli hanno regalato un TOT di bustine di figurine, ciascuna da 5 figurine (5 interi, ogni numero di essi indica il numero
// della figurina nell'album)
//i dati sulle figurine sono memorizzati in un array di strutture di tipo bustina
//
//Scrivere algoritmo che calcola se il bambino riuscirà a finire l'album, se si, quante bustine ha usato (aperto) tenendo
//conto che le bustine vengono aperte in ordine.

//ATTENZIONE manca solo il controllo se ha finito l'album prima di finire le bustine


typedef struct
{
    int fig1;
    int fig2;
    int fig3;
    int fig4;
    int fig5;
    
}bustina;



void addToAlbum(int figBustinaArray[],int album[])
{
    //cambio i valori in 1 degli indici uguali al numero delle figurine nella bustina
    for (int i = 0; i < 5; i++)
    {
        album[figBustinaArray[i]]=1; //non importa se ci sono doppi, tanto l'importante è che l'album sia completo
    }
    


}
void unpack(bustina Bustina[],int n_bustine,int album[],int* usedPacks)
{
    for (int i = 0; i < n_bustine; i++)
    {
        //raggruppo i valori della singola bustina in un array
        int figBustinaArray[5]={Bustina[i].fig1,Bustina[i].fig2,Bustina[i].fig3,Bustina[i].fig4,Bustina[i].fig5};
        addToAlbum(figBustinaArray,album);
        *usedPacks=*usedPacks+1;
    }
}

int main()
{

    const int Nbustine=11;
    bustina Bustina[n_bust]={
        {1,3,7,9,10},
        {1,7,5,4,9},
        {2,24,25,21,22},
        {17,16,15,14,19},
        {1,3,2,4,5},
        {2,6,5,4,8},
        {11,13,14,15,12},
        {19,18,17,16,15},
        {2,4,6,3,12},
        {4,5,2,18,17},
        {13,5,4,6,12}
    };
    int usedPacks=0;

//l'album parte dall'indice 1 così che il numero della bustina sia uguale al numero dell'indice
    int album[dim]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //per segnare che il posto è occupato uso 1.

    unpack(Bustina,Nbustine,album,&usedPacks);

    //stampa album a fine spacchettamento
    for (int i = 1; i < dim; i++)
    {
        if(album[i]==1)
        {
            printf("la figurina di numero %d è presente nell'album\n",i);
        }
        

    }
    
    printf("Sono state aperte %d Bustine\n",usedPacks);


//test
 for (int j = 0; j < dim; j++)
 {
    printf("%d",album[j]);
 }
 

    return 0;
}