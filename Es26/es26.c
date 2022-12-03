//FILE DI TESTO:
/*Si scriva su un file di testo di nome "prova.txt"
quello che l'utente inserisce da tastiera parola per parola,
finché non inserisce la parola FINE
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
FILE *fd;
fd = fopen("prova.txt","w");
if(fd==NULL)
{
    printf("FILE NON TROVATO\n");
    exit(1);
}

char parola[200];

printf("inserire testo per file prova.txt\n");
while(strcmp(parola,"FINE")!=0)
{
    scanf("%s",parola); 
    fputs(parola,fd); //con fputf
}



fclose(fd);
return 0;
}





