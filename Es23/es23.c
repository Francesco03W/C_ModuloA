//28/11/2022 Matrici: array di due dimensioni
//leggere da tastiera un valore N (max 5) e una matrice NxN, tramite una procedura lettura

//verificare che la matrice  sia simmetrica o meno
//nel main, visualizzare se la matrice è simmetrica o meno
#define dim 5 //dimensione fisica della matrice
void readMatrix(int *n,int A[][dim]) //dato che è una procedura, non ci può essere un return
{

    //n max 5, è la dimensione logica
    while(*n<=0||*n>dim)
    {
        printf("inserire ordine matrice minore di 5 e maggiore di zero\n");
        scanf("%d",n);
    }

    //generazione matrice nxn
    printf("inserire valori nella matrice\n");
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *n; j++)
        {
           printf("valore in %d,%d",i,j);
           scanf("%d",&A[i][j]);
        }
        
    }
}

int simmetricMatrix(int n, int A[][dim]){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; i++)
        {
            //quando r=c siamo sulla diagonale principale
            //quando numero r<numero colonna siamo sopra la diagonale
            //quando numero r>numero colonna siamo sopra la diagonale

            //posso partire dal secondo valore della prima riga ( se prendo la sottomatrice di sopra)
            if(A[i][j]!=A[j][i])
                return 0;
        }   
    }
    return 1; //se non trovo nessun elemento diverso tra le coppie ij ji allora è simmetrica
}



int main()
{
    int n=0;
    int A[dim][dim];
    
    readMatrix(&n,A);

    if(simmetricMatrix(A,n)) //non serve passare n per riferimento
        printf("La matrice A è simmetrica\n");
    else 
        printf("La matrice A non è simmetrica\n");

    return 0;
}