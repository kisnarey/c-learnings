#include<iostream>
using namespace std;

int main(){

    int k;
    cin>>k;
    int sum=0;
    int i=2;
    while(i<=k){
        
            if(i%2==0)
            {
            sum=sum+i;
            }
            i=i+1;
        }
            cout<<"the sum from "<<1<<"to "<<k<<" is = "<<sum<<endl;
            return 0;
    }
    