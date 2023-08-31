//this program for the for brake statement..
#include <iostream>
using namespace std;
int main ()
{
    for(int i =1;i<=23;i++)
    {
        if(i==20) // this step inside the curly braces.
        {
            break; 
        } // close the curly braces is compulsory.
        cout<<i<<"\n";
    }
    return 0;
}