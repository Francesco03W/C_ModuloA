/*stampare la tavola pitagorica
valore n: allora mostro tabelline fino a 5*/

#include <stdio.h>

void tav_pitagorica(int n){
    
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d      ",i*j);
        }
        printf("\n");
    }
    
}


int main(){
    int n;
    printf("inserire valore da cui costruire la tavola pitagorica\n");
    scanf("%d",&n);
    tav_pitagorica(n);

    return 0;
}