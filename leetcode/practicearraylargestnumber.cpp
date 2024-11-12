#include<iostream>
using namespace std;

int main(){

    int yo[7];
    
    cout << "Enter the elements in array";
    for ( int i = 0;i < 5; i++)
    {
        cin >> yo[i];
    }

    cout<<"Here is the value of i after for loop ends"<<i;
    cout << "Here are the inserted value in array";
    cout << yo[i] << "\n";
}