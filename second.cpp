#include<iostream>
using namespace std;

int add(int a , int b, int c)
{
    cout<<"here is your additoin "<<a+b+c;
}
int sub (int a , int b , int c)
{
    cout<<"here is your subtraction  "<<a-b-c;
}
int mutiply (int a, int b, int c)
{
    cout<<"here is your multiplication  "<<a*b*c;
}
int divison (int a, int b, int c)
{
    cout<<"here is your divison  "<<a/b/c;
}

int main()
{ 
int choicex , fnum , snum , unum;

cout<<"enter 1 for addition\nenter 2 for subtraction\n enter 3 for multiplication \n enter 4 for divison\n";
 cin>> choicex ;
 cout<<"enter your first number\n";
 cout<<"enter your second number";
 cin>>fnum>>snum>>unum;

  if (choicex==1)
  {   
    add(fnum,snum,unum);
 }

 else if (choicex==2)
 {
    sub(fnum,snum,unum);
 }
 else if (choicex==3)
 {
    mutiply(fnum,snum,unum);
 }
 else if (choicex==4)
 {
    divison(fnum,snum,unum);
 }
}
 