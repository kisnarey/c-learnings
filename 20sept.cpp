#include <iostream>
using namespace std;
int global=10;
int add(int a,int b){
cout<<"\n this is krishna doubting the value"<<global+2<<"\n";
cout<<"the value of ax1"<<a;
    return a+b;//return 7+8
}
int main()
{
    int ax1 ,by2;
    // cout<<global;
    cout<<" enter your first number here\n";
    cin>>ax1;//7        
    cout<<"enter your second number here";
    cin>>by2;//87
    int c;
    // c=add(ax1,by2);
    c=add(by2,ax1);
    //c=7+8=15
    cout<<"\n"<<c; //idhar bas c bhi likh sakte hain add(ax1,by2)
    cout<<"\n experimenting the value"<<"\n"<<c*2;
}