#include <iostream>
using namespace std;


int add(int x , int y )
{
 cout<<"\nenter your number here"<<x+y;
}

int subtract(int x, int y)
{
    couot<<"\n enter your numbeer here"<<x-y;
}
int main(){

    int options , one , two ;
    cout<<"\n enter 1 for addition \n enter 2 for subtraction ";
    cin>>options;
    cout<<"enter your first number\n";
    cout<<"enter your second number\n"
    cin>>one>>two;
    if (options==1)
    {
        add(one,two);
    }
    else if (options==2)
    {
        subtract(one,two);
     }
    

}