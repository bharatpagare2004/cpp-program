// this program for implicit type conversion
#include<iostream>
using namespace std;
int main()
{
    int num = 10;
    char c = 'm'; // the ascii value of m is 109 
    int sum ;
    sum = num + c;   // output become 119
    cout<<"the sum is "<< sum;

}