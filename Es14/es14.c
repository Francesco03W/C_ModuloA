#include <stdio.h>

/*Codificare in c la funzione int disuguaglianza triangolare (int a int b int c) che restituisce
1 se vale la disuguaglianza triangolare a<=b+c
altrimenti 0;

si progetti un programma che legge da tastiera tre lati di un triangolo, poi applichi la funzione disuguaglianza triangolare per verificare
se è possibile costruire un triangolo di quelle dimensioni. 

Un triangolo sarà coastruibile solamente se ogni suo lato è minore o  uguale della somma degli altri due.


*/

int disug_triang(int a, int b, int c)
{
    if(a<=b+c && b<=a+c && c<=a+b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int a,b,c;
    printf("inserire le dimensioni dei 3 lati del triangolo divisi da una virgola\n");
    scanf("%d,%d,%d",&a,&b,&c);

    int result=disug_triang(a,b,c);
    if(result==1){
        printf("Il triangolo è costruibile\n");
    }
    else{
        printf("Il triangolo NON è costruibile\n");
    }
    return 0;
}