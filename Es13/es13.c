/*In ingresso ore minuti e secondi della durata di un CD audio, stampare a video il valore
corrispondente in secondi fra simboli @

Nel main, si definiscano le variabili intere ore minuti secondi, il main dovrà invocare una funzione di conversione
int tempo_to_sec(int ore, int minuti, int sec)

Tale funzione restituisce il numero di secondi corrispondenti

Per tale calcolo si codifichino e si usino le seguenti funzioni: 
int min_to_sec(int m) che dato un numero di minuti m restituisce il numero di secondi corrispondente;
int ore_to_sec(int o) che dato un numero di ore o restituisce il numero di secondi corrispondente

*/

#include <stdio.h>


int min_to_sec(int m)
{
    m=m*60;
    return m;
}
int ore_to_sec(int o)
{
    o=o*3600;
    return o;   
}

int tempo_to_sec(int ore,int minuti, int sec)
{
    int conv_min;
    int conv_ore;
    int conv_tot;
    conv_min=min_to_sec(minuti);
    conv_ore=ore_to_sec(ore);

    conv_tot=conv_min+conv_ore+sec;
    return conv_tot;
    
}

int main()
{
    int ore, minuti, secondi;
    int secondi_tot;
    printf("Inserire le ore di durata del CD audio:\n");
    scanf("%d",&ore);

    printf("inserire i minuti di durata del CD audio:\n");
    scanf("%d",&minuti);

    printf("inserire i secondi di durata del CD audio:\n");
    scanf("%d",&secondi);

    secondi_tot=tempo_to_sec(ore,minuti,secondi);

    printf("Il brano dura @%d@\n",secondi_tot);



    return 0;
}