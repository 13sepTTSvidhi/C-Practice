#include<iostream>
using namespace std;
int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int res=0;
    cout<<"Enter the value of n1"<<endl;
    cin>>n1;
    cout<<"Enter the value of n2"<<endl;
    cin>>n2;
    cout<<"Enter the value of n3"<<endl;
    cin>>n3;
    cout<<"Enter the value of n4:"<<endl;
    cin>>n4;
    res=int(n1+n2+n3+n4)/4;
    cout<<"Average:"<<res;
    return 0;
}