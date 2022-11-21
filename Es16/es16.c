//Si scriva un programma C che stampi a video il triangolo di Tartaglia fino alla settima riga, in ciascuna riga
//gli elementi di questa costruzione si ottengono come somma di due elementi adiacenti dalla riga precedente

#include <stdio.h>
#include <string.h>

#define dim 7 //massimo settima riga quindi 7 elementi 

//serve per copiare il contenuto di un array di int ad un altro array di int
//funzione fai-da-te
int* intarraycpy(int array[],int copy_array[],int logicindex)
{
    for (int i = 0; i < logicindex; i++)
    {
        copy_array[i]=array[i];
    }
    return &copy_array[dim];
}

void tartaglia_calculator(int last_row)
{
int row[dim]={0,1,0};
int row_logicindex=3;
    for (int i = 0; i < last_row; i++)
    {
        int oldrow[dim];
        intarraycpy(row,oldrow,row_logicindex);
        //ad ogni livello, si aumenta di 1 l'indice logico, per controllare il numero di valori
        row_logicindex++;
        for (int j=0;j<row_logicindex;j++){
            if(j==0||j==row_logicindex-1){
                row[j]=0;
            }
            else{
                row[j]=oldrow[j-1]+oldrow[j];
            }

        }
        for (int k=0;k<row_logicindex;k++)
        {
            printf("%d,",row[k]);
        }
        printf("\n");


    }
}


int main()
{
    int n_print_row;
    printf("Benvenuto nel calcolatore di tartaglia\n");
    printf("Scegliere il numero di righe da stampare del triangolo di tartaglia\n");
    scanf("%d",&n_print_row);
    tartaglia_calculator(n_print_row);






    return 0;
}