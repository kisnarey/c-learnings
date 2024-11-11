#include<iostream>
using namespace std;

int division (int a , int b)
{
return a/b;    
}
int subtaction(int a, int b)
{
return a-b;
}
int additon(int a, int b)
{
return a+b;  
}
int multiply(int a, int b)
{
    return a*b;
}

int main(){

    int ax1,by2;
    cout<<"enter your number here";
    cin>>ax1;
    cout<<"enter your number here";
    cin>>by2;
    int c;
    c=additon(ax1,by2);
    cout<<multiply(ax1,by2)*2;
    cout<<division(ax1,by2);
    cout<<"here is your number"<<c;
    }

