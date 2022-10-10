#include <stdio.h>
// Il programma prende in ingresso il numero di kilowattora consumati dall'utente nell'ultimo mese
/* e restituisce la cifra dovuta in euro.
Per educare le famiglie a un consumo consapevole dell'energia elettrica la società ha deciso che il 
costo per kWh
cambia in base al consumo mensile come segue: i primi 200Kwh costano 1 euro per kwh
i kwh dal 201esimo fino al 400 esimo costano 2 euro per kwh i kwh dal 401esimo al 600esimo costano 3 euro per kwh
i kwh oltre il 600esimo costano 4 euro per kwh si noti che si tratta di una funzione continua
Ad esempio se l'energia spesa è di 450KWH il costo sarà:

200 kWh*1=200   +
200 kWh*2= 400  +
50 Kwh*3= 150   +
=       750
*/

void CalcoloSpesa(int* consumo){
    int costo_totale=0;
    int consumo_restante=0;
if(*consumo>=600){
    //composto da consumo tra 0-200, 201-400, 401-600,consumo-600
    consumo_restante=*consumo-600;
    costo_totale=(1*200)+(2*200)+(3*200)+(4*consumo_restante);
    printf("IL COSTO TOTALE E' %d",costo_totale);

}else{
    if(*consumo>=401&&*consumo<600)
    {
        //composto da consumo tra 0 200, 200 400, e consumo-400
        consumo_restante=*consumo-401;
        costo_totale=(1*200)+(2*200)+(3*consumo_restante);
        printf("IL COSTO TOTALE E' %d",costo_totale);
    }
    else
    {   
        if(*consumo>=201&&*consumo<=400){
            //composto da consumo tra 0 e 200, e consumo-201
            consumo_restante=*consumo-201;
            costo_totale=(1*200)+(2*consumo_restante);
            printf("IL COSTO TOTALE E' %d",costo_totale);
        }
        else{
            if(*consumo>=0&&*consumo<=200)
            {
                //composto da consumo
                costo_totale=*consumo;
                printf("IL COSTO TOTALE E' %d",costo_totale);
            }
        }
    }
}

}


int main(){
    int consumo_kWh=0;
    printf("Inserire il numero di kWh consumati nell'ultimo mese:\n");
    scanf("%d",&consumo_kWh);

    CalcoloSpesa(&consumo_kWh);

    

    return 0;
}