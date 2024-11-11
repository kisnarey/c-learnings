#include<iostream>
using namespace std;

int main(){

    float fahrenheit,celsius;
    int f_start,f_end;

    cout<<"Enter the starting temperature:  ";
    cin>>f_start;

    cout<<"enter the ending temperature:  ";
    cin>>f_end;

    fahrenheit = f_start;

    while(fahrenheit<=f_end){

        celsius= (5.0/9.0) * (fahrenheit -32);
        cout<<fahrenheit<<" fahrenheit is equal to "<<celsius<<" celsius."<<endl;
        fahrenheit++;
    }

}