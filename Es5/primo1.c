#include <stdio.h>
int main()
{
  int n=-1;
  int i=1;
  int ndiv=0;
  printf("inserisci un numero\n");

  while(n<=0)
  {
    scanf("%d",&n);
  }

  if(n==1)
  {
    printf("1 è un numero primo\n");
  }
  else
  {
    while(i<=n)
    {
        if(n%i==0)
        {
            ndiv++;

        }
        i++;
    }

    if(ndiv>2)
    {
        printf("il numero non è primo\n");
    }
    else
    {
        printf("è primo\n");
    }
  }
    
    
    
    
    
    
    
    
    
    
    return 0;
}
