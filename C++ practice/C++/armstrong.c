#include<stdio.h>
int main()
{
    int n,originaln,rem,result=0;
    printf("Enter a three-digit integer:");
    scanf("%d",&n);
    originaln=n;
    while (originaln !=0)
    {
        rem=originaln % 10;
        result+= rem*rem*rem;
        originaln/=10;
    }
    if(result==n)
      printf("%d is an Armstrong number",n);
    else
      printf("%d is not an Armstrong number",n);
    return 0;
}