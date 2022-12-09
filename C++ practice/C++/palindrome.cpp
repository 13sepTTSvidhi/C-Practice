#include<iostream>
using namespace std;
int main()
{
    int n,rem,original;
    int rev=0;
    cout<<"Enter the number:";
    cin>>n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(original==rev)
       cout<<"%d is a pelindrome number",original;
    else
       cout<<"%d is Not a palindrome number",original;
    return 0;
}