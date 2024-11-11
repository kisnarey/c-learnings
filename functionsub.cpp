#include<iostream>
#include<vector>
using namespace std;

int multiply(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int add(int a,int b){
    return a + b;
}
int sub(int a,int b){
        return a - b;
}
int main()
{
    int ax1 , by2;
    vector<int> a;
    a.push_back(10);
    cout<<"enter your first number";
    cin>>ax1;
    cout<<"enter your second number\n";
    cin>>by2;
    cout<<"here is your subtraction\n"<<sub(ax1,by2);
    cout<<"here is your addition\n"<<add(ax1,by2);
    cout<<"here is your division\n"<<divi(ax1,by2);
    cout<<"here is your multiplication\n"<<multiply(ax1,by2);

}