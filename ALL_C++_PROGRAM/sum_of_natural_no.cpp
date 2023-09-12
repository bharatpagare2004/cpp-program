// this program for find the sum of n natural number..
#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0;// intialize the value

    cout<<"enter a number = ";  // taking number from user.
    cin>>n;
    for(int i = 1;i<=n;i++){ // using for loop find the sum if n natural number.
        sum += i; // increament the value size
    }
    cout<<"the sum is "<<sum; // and finaly sum generated here.
    return 0;
      
}