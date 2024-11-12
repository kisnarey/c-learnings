#include <iostream>
using namespace std;
 
int main() {
int arr[5]; // 4 5 6 7 8 5
int sum;
cout<<"Enter the array values";
for(int i=0;i<5;i++){
    cin>>arr[i];
}
    for(int i=0;i<5;i++){
        sum= sum+arr[i];
        cout<<"here is the updating sum "<<sum<"\n";
    }
    cout<<"here is the value of sum"<<sum;
}