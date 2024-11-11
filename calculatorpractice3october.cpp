#include<iostream>
using namespace std;

int add(int a , int b){
    cout<<"here is your addition "<< a+b<<endl;
}
int subtract(int a , int b){
    cout<<"here is your subtraction "<< a-b<<endl;
}
int multiply(int a , int b){
    cout<<" here is your multiplication "<< a*b<<endl;
}
int division(int a ,int b){
    if (b==0)
    {
        cout<<" Error! division by zero is not allowed "<< endl;
    }
    else
    {
        cout<< "here is your division "<< a/b <<endl;
    }
}
int main(){
    int choicex,fnum,snum;
    cout<< "Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n";
    cin >> choicex ;
    cout<< "Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n";
    cout<<"Enter your first number "endl;
    cin>>fnum;
    cout<<"Enter your second number ";
    cin>>snum;
    if (choicex==1)
    {add(fnum, snum);}
    else if (choicex == 2)
    {subtract(fnum, snum);}
    else if (choicex == 3)
    {multiply(fnum,snum);}
    else if (choicex == 4)
    {division(fnum,snum);}
    else    {cout<<"INVALID CHOICE CHOSEN" << endl;}
    return 0;
} 