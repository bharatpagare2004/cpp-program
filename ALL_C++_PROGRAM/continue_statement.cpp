// this program for execution of continue statement.
#include<iostream>
using namespace std;
int main()
{
    for(int i = 0;i<=10;i++)
 {
    if(i==5)// skip this element using continue statement.
    {
        continue; //continue the flow....

    }
    cout<<i<<"\n";

 }
}