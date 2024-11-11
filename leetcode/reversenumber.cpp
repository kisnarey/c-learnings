#include<iostream>
using namespace std;

int main()
{   int x;
    int z;
    int y ;
    int rev =0;
    cout<<"enter your number which you want to reverse";
    cin>>y;
    z=y;
    
    while (y>0)
    {   
        x=y%10;
        rev=rev*10 + x;
        y=y/10;

    }
    if (z==rev)
    {
        cout<<"your number is palindrome\n";      
    }
    else{
        cout<<"your number is not palindorme\n";
    }
    
    cout<<"here is the value of z\n"<<z;
    cout<<y;
    cout<<"\nhere is your reverse number\n"<<rev;

}