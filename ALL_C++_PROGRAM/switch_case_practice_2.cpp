//program for switch case practice
# include <iostream>
using namespace std;
int main ()
{
    int number;
    cout<<"enter date of birth:";
    cin>>number;
    switch(number)
    {   
        case 14:cout<<" birth date of bharat";//this program for correct bith date.
        break;
        case  15:cout<<" birth date of itesh";
        break;
        default : cout<<"this is invalide birth date";
        return 0;          
    }
}    