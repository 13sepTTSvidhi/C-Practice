#include<stdio.h>
int main()
{
    int X=0;
    int Y=1;
    int Z=0;
    printf("%d\n",X);
    printf("%d\n",Y);
    while(Z<=100)
    {
        Z=X+Y;
        printf("%d\n",Z);
        X=Y;
        Y=Z;
    }
    
     return 0;
}
