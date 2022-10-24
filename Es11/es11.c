/* si progetti un programma che converta lo stipendio di un dipendente di un'azienda in sterline o in yen.
Si creino le seguenti funzioni: 
-funzione di conversione euro sterlina: float EuroSterlina che effettua la conversione
1euro=0,91 sterlina
-funzione di conversione euro/yen float EuroYen che effettua la conversione 1 euro=124,09 yen

Si scriva poi un main() che prenda in ingresso un intero e chieda all'utente se vuole 
convertirlo in sterline o in yen e chiami la funzione di conversione adeguata EuroSterlina o EuroYen
si stampi lo stipendio convertito.


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float EuroSterlina(float value)
{
    value*=0.91;
    return value;
}
float EuroYen(float value){
    value*=124.09;
    return value;
}

int main()
{
    float conv_wage;
    int choice,wage;
    char* currency;
    printf("inserire la somma dello stipendio percepito il mese corrente\n");
    scanf("%d",&wage);

    printf("PREMERE\n 1 per convertire la somma in sterline, 2 per convertire la somma in yen\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            conv_wage=EuroSterlina(wage);
            currency="Sterlina";
            break;  
        case 2:
            conv_wage=EuroYen(wage);
            currency="Yen";
            break;
        default:
            printf("ERRORE: valore di input non valido,inserire solo 1 o 2\n");
            exit(1);
    }
    printf("Lo stipendio di %d € ammonta a %.2f %s \n",wage,conv_wage,currency);


    return 0;
}