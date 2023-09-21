#include <iostream>
using namespace std;

int main ()
{
    int marks;
    cout<<"Enter your Marks: ";
    cin>> marks;

    if (marks >=36) {
        cout<<"Passed";
    } else {
        cout<<"Failed";
    }
}