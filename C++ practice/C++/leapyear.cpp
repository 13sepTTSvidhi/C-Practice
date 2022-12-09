#include<iostream>
using namespace std;
int main()
{
   int year=0;
   cout<<("Enter the year||:");
   cin>>year;
   if((year%4==0&&year%100|=0)||(year%400==0))
   {
    printf("Leap year");
   }
   else
   {
    printf("Try again!!!");
   }
   return 0;
}