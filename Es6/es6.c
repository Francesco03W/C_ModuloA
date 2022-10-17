/*Scrivere un programma C che dato un numero intero N calcoli il fattoriale
di tutti i numeri interi minori o uguali a N, si usi il tipo di ciclo ritenuto più adeguato.
Nota: il fattoriale di N è il risultato della moltiplicazione di tutti gli interi compresi 
fra 1 e N. Esempio: 3!=1*2*3=6;*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("inserire un numero positivo\n"); //OLTRE 16 VA IN OVERFLOW
    scanf("%d",&n);
    //è più corretto else if, perché se trova vera la prima condizione elimina le possibilità restanti
    if(n<0)
    {
        printf("non si può calcolare il fattoriale\n");
        exit(1);
    } 
    else
    {
        if(n==0)
        {
            printf("il fattoriale è 1\n");
            exit(1);
        }
        else
        {
            for (int i=1;i<=n;i++) //ciclo per elencare i numeri tra 1 e n
            {
                int fattoriale=1;
                for(int k=1;k<=i;k++)
                {
                    fattoriale=fattoriale*k;
                }
                printf("Il fattoriale di %d è %d\n",i,fattoriale);
            }
        }
    }


    



    return 0;
}