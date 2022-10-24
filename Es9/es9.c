/*Scrivere una funzione che prende come parametri le coordinate di due punti sul piano e calcola
la distanza di Manhattan fra i due punti.*/
#include <stdio.h>
//se avessi la funzione assoluto non avrei problemi con il calcolo in caso di segni ecc

int module(int val)
{
    if(val<0)
    {
        return -val;
    }
    return val;
}

int manhattan(int xA,int yA, int xB, int yB)
{
    //dist=|x1-x2|+|y1-y2|

    int dist= module(yB-yA)+module(xB-xA); 
    return dist;
}

int main()
{
    int xA,xB,yA,yB;
    int dist;
    printf("inserire le coordinate del punto A separate da una virgola->x,y\n");
    scanf("%d,%d",&xA,&yA);

    printf("inserire le coordinate del punto B separate da una virgola->x,y\n");
    scanf("%d,%d",&xB,&yB);

    dist=manhattan(xA,yA,xB,yB);
    printf("La distanza è %d\n",dist);

    return 0;
}