#include<iostream>
using namespace std;

int main()
{   int sum;
    int abc1[4];
    cout<<"give me value to be inserted in the array ";
    for (int i = 0; i < 4; i++)
    {
        cin>>abc1[i];
    }
    //  abc m going to print the inserted array on the display panel in terminal gaay hamarai mata hai uske 
    cout<<"here is your inserted numbers";
    for ( int i = 0; i < 4; i++)
    {
        cout<<abc1[i];
    }
    sum= abc1[0] + abc1[1] +abc1[2] +abc1[3];
    cout<<"here is your sum "<<sum;
}

