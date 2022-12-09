#include<stdio.h>
int main()
{
    int n=0;
    int i=0;
    int fact=1;
    printf("Enter no:");
    scanf("%d",&n);
    for (i = 1; i <=5; i++)
    {
        fact=fact*i;
    }
    printf("factorial:%d=%d",n,fact);
    return 0;  
}
