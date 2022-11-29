// Nel margine di una lettera ad Eulero, il matematico prussiano Christian Goldbach
/*formulava un'ipotesi che, in termini moderni, viene spesso descritta così
"Ogni intero pari maggiore di 2 può essere scritto come la somma di due numeri primi"

Si scriva una funzione con la seguente interfaccia:
int goldbach ( int n,int* primo1,int* primo2)

Tale funzione, dato un intero n, fornisce:
-come valore di ritorno un valore intero 0/1 (falso/vero)
che comunica se il numero n può essere scomposto nella somma
di due numeri primi;
qualora sia possibile due numeri primi (primo1,primo2) che danno come somma n;
*/

#include <stdio.h>
#define dim 300

int goldbach(int n, int *primo1, int *primo2)
{
    // bisogna trovare i numeri primi da 1 a n
    // 1 è già primo di default
    int primi[dim];
    primi[0] = 1;

    int primiLogicIndex = 1; // effettivo numero di numeri primi inferiori a n

    // appena trovo due numeri primi, faccio subito la somma

    for (int i = 2; i < n; i++)
    {
        int numPrimo = 0; // indicatore se numero primo o meno per uscire dal while
        int j = 1;
        while (j < i) // tutti i numeri minori di i
        {
            // controllo SE i è un numero primo, quindi basta un numero <i
            // che sia divisore (diverso da 1 e i), e i non è primo
            if (i % j == 0 && j != 1)
            {
                // allora i non è primo
                j = i; // usciamo dal ciclo while e resettiamo j a 1 nel for
                numPrimo = 0;
            }
            else
            {
                // continua il controllo, per ora il numero è ancora primo, continuo finché:
                // trovo un numero divisore (diverso da 1 e i) oppure,
                // finisco il ciclo while, stando sempre in questo else ad ogni iterazione
                // e confermando che i è un numero primo
                numPrimo = 1;
                // proseguo al successivo j<i
                j++;
            }
        }
        if (numPrimo == 1)
        {
            primi[primiLogicIndex] = i;
            // bisogna aumentare manualmente l'indice logico dei numeri primi
            primiLogicIndex++;
        }
        // se non è primo si prosegue al successivo candidato i
    }

    printf("numeri primi inferiori a n:\n");
    // TEST STAMPA
    for (int i = 0; i < primiLogicIndex; i++)
    {
        printf("%d ", primi[i]);
    }

    // ora, se ho trovato che da 1 a n ci sono almeno 2 numeri primi, provo a sommarli per trovare n
    if (primiLogicIndex >= 2)
    {
        // prendo ogni numero primo e controllo che sia sommabile con i successivi per fare n
        for (int i = 0; i < primiLogicIndex; i++)
        {

            for (int j = 1; j < primiLogicIndex; j++) // parto dal secondo indice dei primi, essendo il precedente 1
            {
                if (primi[i] + primi[j] == n)
                {
                    *primo1 = primi[i];
                    *primo2 = primi[j];
                    return 1;
                }
            }
        }
    }
    //  IN QUALUNQUE CASO, se trovo i numeri primi ma la somma di nessuno di questi risulta n, allora significa che;
    // non ho trovato elementi la cui somma è uguale a n (assurdo per il teorema)
    // oppure, non ho almeno due numeri primi minori di n con cui lavorare, ad esempio: n=2
    printf("\noperazione non possibile, non ci sono almeno 2 numeri primi\n");
    return 0;
}

int main()
{
    int n = 0;
    int primo1, primo2;
    while (n <= 0)
    {
        printf("inserire valore numerico n \n");
        scanf("%d", &n);
    }
    if (goldbach(n, &primo1, &primo2))
        printf("\nIl numero n > 2 può essere somma di due numeri primi, come %d + %d = %d \n", primo1, primo2, n);
    else
        printf("\nIl numero n>2 non ha almeno 2 numeri primi oppure non può essere somma di due numeri primi\n");

    return 0;
}
