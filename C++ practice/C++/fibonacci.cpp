#include<iostream>
using namespace std;
int main()
{
    int X=0;
    int Y=1;
    int Z=0;
    cout<<X<<endl;
    cout<<Y<<endl;
    while(Z<100)
    {
        Z=X+Y;
        cout<<Z<<endl;
        X=Y;
        Y=Z;
    }
    return 0;
}