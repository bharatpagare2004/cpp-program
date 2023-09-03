// this program for switch case concept.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number : ";
    cin>>num;
    switch (num)
    {
    case 90 : cout<<"it is 90";

              break;
    case 56:cout<<"it is 56";
              break;
    case 67:cout<<"it is 67";
              break;          
    default:cout<<"this is invalide number. ";
              break;
    }
}