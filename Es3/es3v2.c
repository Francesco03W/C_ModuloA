#include <stdio.h>

//al posto di usare somme e differenze si possono usare prodotti e divisioni

int CalcoloSpesa(int* consumo,int* spesa)
{
    int resto,calcolo=0;
    resto=*consumo%200;
    calcolo=*consumo/200;

    if(calcolo==0) *spesa=resto;
    if(calcolo==1) *spesa=200+(2*resto);
    if(calcolo==2) *spesa=600+(3*resto);
    if(calcolo>2)  *spesa=1200+(4*resto);

    return *spesa;
}

int main(){
    int consumo_kWh,spesa=0;
    printf("Inserire il numero di kWh consumati nell'ultimo mese:\n");
    scanf("%d",&consumo_kWh);

    spesa=CalcoloSpesa(&consumo_kWh,&spesa);
    printf("%d",spesa);

    return 0;
}
