#include <iostream>
using namespace std;

int main()
{
    // how to declare an array
    // datatype name [size];
    // example would be int man [5];

    int man[5];

    // how to insert value in array

    // since array is linear in fashion we need for loop to iterate over
    // each memory block and fill the value. Remember the table diagram which i shared the tabular one

    // here is how i am inserting the value in array
int i = 0;
    cout << "Enter the elements in array";
    for ( ;i < 5; i++)
    {
        cin >> man[i];
    }

    cout<<"Here is the value of i after for loop ends"<<i;
    cout << "Here are the inserted value in array";
    cout << man[i] << "\n";
    // the way valued are asigned in array are man[0],man[1],man[2],man[3],man[4]

    // how to display the content o the array

    // we need again the for lop since we need to iterate over the entire

    // cout << "Here are the inserted value in array";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << man[i] << "\n";
    // }

    // // tum mera land ho madarchod Randi ke bache
}
