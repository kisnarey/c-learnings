#include<iostream>
using namespace std;

int main(){
// { int c;
//     int z=8;
//     int alpha[22];
//     for(int i=0;i<22;i++)// iterate display= for loop with cout ---iterate input== cin 
//     {
//         cout<<alpha[i]<<"\n";
//         cin>>z;
//     }
    int yor[5];
    int u=0;
    
    for(int i=0;i<5;i++)
    {
        cout<<"enter your number here";
        cin>>yor[i];
        u=u+yor[i];
            }
            cout<<"here is your sum"<<u;
    for(int i=0;i<5;i++)
    {
        u=u+yor[i];
    }    
}