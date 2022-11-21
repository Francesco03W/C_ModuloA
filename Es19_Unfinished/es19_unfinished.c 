//Esercitazione 6
//In una piazza N bambini si sono disposti in cerchio attorno a babbo natale in attesa di
//un regalo. Babbo Natale però è avaro e decide di distribuire solamente N-1 doni, in un modo un po'
/*strano. Scelto un bambino iniziale (il primo) salta k-1 bambini raggiungendo così il k-esimo
al quale viene dato un dono. Il bambino esce dal cerchio per lasciare la possibilità
agli altri di ricevere un regalo, DI nuovo babbo natale salta k-1 bambini e dona un regalo al k-esimo
bambino, il quale, dopo aver ricevuto il regalo, torna a casa. Il cerchio si stringe finché i doni
non finiscono ed un bimbo rimane senza regalo

Input i valori di N e K, determini la posizione del bambino che rimarrà senza regalo
usare gli array
*/

#include <stdio.h>
#include <string.h>

void eliminaBambino(int bambini[],int new_bambini[],int n_dim,int indice_rim)
{

}

void consegnaRegalo(int bambini[],int n,int k)
{
    int jump=k-1;
    int kid_index=0; //si parte dal primo bambino dell'array
    int consegna=0;
    while(consegna<n-1)
    {
        //indice di consegna regalo bambino
        kid_index=kid_index+jump;
        //devo saltare il/i bambini successivi
        kid_index++; //considero il regalo del bambino di indice kid_index come già consegnato, quindi lo elimino e lo salto
        //salterò anche i k-1 successivi, per dare al k-esimo il regalo

        //EFFETTUO LA CONSEGNA
        consegna++;

    }
    


}

int main()
{
    int n;
    int k;
    

//lascio stare i controlli degli input, l'importante è l'algoritmo
    printf("inserire il numero di bambini\n");
    scanf("%d",&n);
    
    
    printf("inserire valore di K\n");
    scanf("%d",&k);

    int bambini[n];
    //creazione array bambini numerati da 1 a n (indici da 0 a n-1)
    for(int i=0;i<n;i++)
    {
        bambini[i]=i+1;
    }
    consegnaRegalo(bambini,n,k);

    




    return 0;
}