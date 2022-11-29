// esercizio esame malvagik
#define n_delitti 100 // massimo 100 delitti
#define max 20

#include <string.h>
#include <stdio.h>

typedef struct
{
    char tipodelitto[max];
    int x; // coordinate delitto tra 0 e 9
    int y;
} delitto;

void elabora(delitto D[], int n, char Mappa[][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            Mappa[i][j] = ' '; //apici perché char non stringhe
        }
    }

    for (int i = 0; i < n; i++) // scorriamo gli omicidi effettivamente commessi
    {
        if (strcmp(D[i].tipodelitto, "Omicidio") == 0)
        {
            Mappa[D[i].x][D[i].y] = '*'; // NON "*"
        }
    }
}

void visualizza(char Mappa[][10])
{
    // stampa della mappa 10x10
    for (int i = 0; i < 10; i++)
    {
        printf("----------------------------------");
        for (int j = 0; j < 10; j++)
        {
            printf("| %c |", Mappa[i][j]);
        }
    }
}

int main()
{
    int n = 0;
    char Mappa[10][10];

    // ogni delitto ha tipodeliltto, coordinata x e coordinata y
    delitto array[n_delitti];
    // ci sarà una qualche lettura dei crimini
    //lettura(array, &n);

    elabora(array, n, Mappa);

    // manca solo visualizzazione sullo schermo del contenuto della matrice.
    visualizza(Mappa);

    return 0;
}