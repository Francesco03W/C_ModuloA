#include <stdio.h>


int manhattan(int x1,int y1,int x2,int y2)
{
    int distanza, dx,dy;
    dx=module(x1-x2);
    dy=module(y1-y2);
    distanza=dx+dy;

    return distanza;
}
int module(int val)
{
    if(val<0)
    {
        return -val;
    }
    return val;
}

int main()
{
    int x1=3,x2=4,y1=1;
    int d;
    d=manhattan(x1,y1,x2,0);



    return 0;
}