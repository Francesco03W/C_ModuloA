/* 
TEORIA
si definisca una opportuna struttura dati per contenere i membri della commissione paritetica docenti studenti
si inizializzi la struttura dati con i dati a lato (diapo)
si scriva un programma in c che:
legge da tastiera ruolo, CdS, e livello del CdS
visualizza nome e cognome del membro della CPDS.*/
#include <stdio.h>

#define DIM 50

typedef struct{ //STRUCT sempre all'esterno del main
    char nome[DIM];
    char cognome[DIM];
    char ruolo;
    char CdS[DIM];
    char LivCdS[DIM];
} membro;

int main()
{//membro è un tipo di dato struct con le caratteristiche specificate sopra
    //per inizializzare un membro: membro CDPS[20]={"Alice","Zaghini",'S'}; 
    int N=14;
    membro CDPS[20]=
    {
        {"Leonardo","Schippa",'P',"Civile","LM"},
        {"Stefano","Piva",'P',"Indsutriale","LM"},
    };
    //nome tipo e nome variabile DEVONO essere diversi
    //se voglio input utente 
    membro v;
    scanf("%c %s %s",&v.ruolo,v.CdS,v.LivCdS);
    
    for(int i=0;i<N;i++)
    {
        if(strcmp(v.CdS,CDPS[i].CdS)==0 && v.ruolo==CDPS[i].ruolo && strcmp(v.LivCdS,CDPS[i].LivCdS)==0)
        {
            printf("%s,%s",CDPS[i].nome,CDPS[i].cognome);
        }

    }
 
    return 0;
}