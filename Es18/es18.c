/*
TEORIA
passaggio per copia / passaggio per riferimento
con * si ha un operazione di deferenziazione
con & si ha un estrazione di indirizzo

* indirizzo -> variabile
& variabile -> indirizzo

si scriva una procedura che, dato un valore intero
lo modifica eliminando il segno
variabile con valore -5 e invoca la procedura EliminaSegno


*/ 
#include <stdio.h>

void EliminaSegno(int* x)
{
    if(*x<0)
    {
        *x=-*x;
    }
}

int main()
{
    int value=-5;
    EliminaSegno(&value);
    printf("valore senza segno %d\n",value);
    return 0;
}