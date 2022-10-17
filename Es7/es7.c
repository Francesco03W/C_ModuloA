/* Esercizio 2 consegna
Scrivere un programma in linguaggio C che prenda in ingresso una sequenza di numeri interi
positivi e negativi, terminata da zero. Quando l'utente inserisce lo zero il programma deve stampare a 
video la somma di tutti i numeri positivi int e la loro media float. Stampare il valore della somma tra
chioccioline, come indicato anche nell'immagine di esempio seguente.
CONSIGLIO: Non è necessario memorizzare tutti i numeri positivi, è sufficiente memorizzare la loro somma
*/

#include <stdio.h>

int main()
{
    float avg;
    int n,sum=0,i=0;

    printf("inserire un numero intero positivo o negativo\n");

    while(n!=0)
    {
        scanf("%d",&n);
        if(n!=0)
        {
        sum=sum+n;
        i++;
        }

    }
    avg=sum/i;
    printf("La media dei %d valori inseriti è:%f\n",i,avg);


    return 0;
}
