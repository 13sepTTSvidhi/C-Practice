#include<stdio.h>
int main()
{
    int n,rem,original;
    int rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    while (n !=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(original==rev)
    {
    printf("%d is a Palindrome number",original);
    }
    else
    {
    printf("%d is not a pelindrome number",original);
    }
    return 0;
}