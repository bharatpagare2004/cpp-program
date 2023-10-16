/*// this program for 1 to 20
#include<iostream>
using namespace std;
int main()
{
    int i ;
    for(i = 0 ;i<=20;i++)
    {
      cout<<i<<endl;
    }
    return 0;

}*/
// we accept the value from user
// how many number you want to print this number. 
#include<iostream>
using namespace std;
int main()
{
     int i=1 ;
     int n;// declaration of n for user.
     cout<<"enter a number you want to print: ";
     cin>>n;

    for(i= 1;i<=n;i++)// using for loop for cheaking the condition 
    {
        cout<<i<<endl; // printing the number // endl the number for new line

    }
    return 0 ;
}

