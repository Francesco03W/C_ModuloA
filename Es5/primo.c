//verificare se un numero è primo

//un numero è primo se ha solo due divisori cui se stesso e 1

#include <stdio.h>

int main() 
{
unsigned int n,i,f=0;
printf("Inserisci numero:\n");
scanf("%d",&n);

//se ci sono più di due divisori con resto zero non è primo
i=1;
while(i<=n/2){
    if(n%i==0){
        f++;
    }
    i++; //dato che i numeri primi sono tutti dispari, posso fare i=i+2
}
if(f>2||n==1){
    printf("non è primo\n");
}
else{
    printf("è primo\n");
}



return 0;
}