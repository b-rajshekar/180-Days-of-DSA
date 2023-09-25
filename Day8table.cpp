// Print a table given by the user.

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a table: ";
    cin>>n;

    for(i=1; i<=10; i++) {
        
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}