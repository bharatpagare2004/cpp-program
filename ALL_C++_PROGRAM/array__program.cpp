// this program takes an array of element and print the element at position 
#include<iostream>
using namespace std;
int main()
{
    char arr[10],ele;
    int i ,n ,pos;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the array element: ";
    for(i = 1;i<=n ;i++)
    cin>>arr[i];
    cout<<"\nenter the position: ";
    cin>>pos;
    for(i =1;i<=n;i++)
      if(pos == i) // we use the if condition for checking the condition
      
        ele = arr[i]; // store the element of that particular position.
      
      cout<<"\n element of position "<<pos<<" is :"<<ele;
      return 0;
}