#include<iostream>
using namespace std;
int main()
{
    int days,years,weeks;
    cout<<"Enter days:";
    cin>>days;
    years=days/365;
    weeks=(days%365)/7;
    days=((years*365)+(weeks*7));
    cout<<"years:"<<years<<endl;
    cout<<"weeks:"<<weeks<<endl;
    cout<<"days:"<<days<<endl;
    return 0;
}