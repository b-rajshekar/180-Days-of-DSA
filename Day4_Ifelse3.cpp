#include <iostream>
using namespace std;

int main ()
{
    int day;
    cout<<"Enter a day: ";

    cin>>day;

    if(day==1)
    cout<<"Lunes";
    else if (day==2)
    cout<<"Martes";
    else if (day==3)
    cout<<"Miercoles";
    else if (day==4)
    cout<<"Jueves";
    else if (day==5)
    cout<<"Viernes";
    else if (day==6)
    cout<<"Sabado";
    else if (day==7)
    cout<<"Domingo";
    else 
    cout<<"Please enter valid number";
}