#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout<<"Enter number: ";
    cin>>number;

    if(number%2==0) {
        cout<<"Even";
    } else {
        cout<<"Odd";
    }
}