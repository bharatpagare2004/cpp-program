// this program for "goto statement.."
#include<iostream> //this program for find the average...
using namespace std;
int main ()
{
    int num ,average,sum =0.0;
    int i,n;
    cout<<"maximum no of input: ";
    cin>>n;
    for ( i = 1; i<=n; i++)
      {
        cout<<"enter n"<<i<<":";
        cin>>num;
        if (num<0.0)
        {
              goto jump;
        }
        sum +=num;

      }
    jump:
      average = sum /(i-1);
      cout<<"\naverage = "<<average;
      return 0;
}