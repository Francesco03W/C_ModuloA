/*
dati la base b e l'esponente e calcolare la potenza b^e
*/

#include <stdio.h>

int main()
{
unsigned int b,e,p; //senza segno
printf("Inserire Base ed Esponente:");
scanf("%d %d",&b,&e);

p=1;
while(e!=0)
{
    p*=b;

    e--;
}
printf("%d^%d=%d",&b,&e,&p);
    return 0;
}