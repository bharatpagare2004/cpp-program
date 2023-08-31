// this program for farenheit to celcius..
#include<iostream>
using namespace std;
int main()
{
    float celcius ,farenhite;
    cout<<"please enter temperature in farenhite :  ";
    cin>>farenhite;
    

    //this is formula for convert farenhite to celcius..
    celcius = (farenhite - 32)*5/9;
    cout<<"the temperature in celcius =  "<<celcius;
    return 0;

}