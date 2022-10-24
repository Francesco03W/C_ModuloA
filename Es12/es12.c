/* si scriva una funzione range (int start,int stop,int step) che stampi
in una sequenza ordinata di numeri interi a partire dall'intero "start"(compreso)
fino all'intero "stop" (non compreso) con un passo dato dal parametro step
esempio range(1,10,2)->1 3 5 7 9

all'interno del main richiamare la funzione range per stampare i risultati delle tabelline dall'1 ad un numero N letto da
tastiera*/

#include <stdio.h>


void range(int start,int stop,int step)
{
    int i=0;
    while(i<stop)
    {
        printf("%d  ",i);
        i=i+step;
    }
}


int main() 
{
    int start,stop,step;

    printf("Inserire numero iniziale della sequenza\n");
    scanf("%d",&start);

    printf("Inserire numero finale della sequenza\n");
    scanf("%d",&stop);

    printf("Inserire lo step per stampare la sequenza di numeri\n");
    scanf("%d",&step);

    range(start,stop,step);

    return 0;
}