#include<iostream>
using namespace std;
 
int main()
{
    int a [20];

    for (int i=0;i<20;i++){

        cout<<"enter number";
        cin>>a[i];
    }

    for (int i=0;i<20;i++){

        cout<<"\nhere is your number\n"<<a[i];
    }
}