#include <iostream>
using namespace std;

int add(int a , int b)//this is called function definition and 
//in it these r called paramters/arguements
{
    cout<<"here is your addition"<<a+b;
}
int sub (int a , int b)
{
    cout<<"here is your subtraction"<<a-b;
}
int mutiply (int a, int b)
{
    cout<<"here is your multiplication"<<a*b;
}
int divison (int a, int b)
{
    cout<<"here is your divison"<<a/b;
}
int main()
{ 
int choicex , fnum , snum;

cout<<"enter 1 for addition\nenter 2 for subtraction\n 
    enter 3 for divison\n enter 4 for multiplication\n";
    
 cin>> choicex;
 cout<<"enter your first number\n";
 cout<<"enter your second number";
 cin>>fnum>>snum;
 if (choicex==1)
  {   // cout<<"here is your addition\n" << fnum+snum;
    add(fnum,snum);//tthis is called function calling
 }
 else if(choicex==2)
 {
    // cout<<"here is your subtraction\n" << fnum-snum;
    sub(fnum,snum);
 }
 else if (choicex==3)
 {
    // cout<<"here is yopur divison" << fnum/snum;
    mutiply(fnum,snum);
 }
 else if (choicex==4)
 {
    // cout<<" here is  your multiplication" << fnum*snum;
    divison(fnum,snum);
 }
    
    }
    