// this program for add array element and product of array element.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,sum = 0,product = 1;
    cout<<"enter the array size : ";
    cin>>n;
    cout<<"\nenter the array element: ";
    for(i = 0 ;i<n;i++)
    cin>>arr[i];
    for(i= 0;i<n;i++)
    {
         sum += arr[i];
         product  *= arr[i];

    }
    cout<<"\n the sum of array element is = "<<sum ;
    cout<<"\n the product of array element is = "<<product;
    return 0;
}