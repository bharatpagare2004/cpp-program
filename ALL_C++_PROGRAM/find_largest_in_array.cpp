// this program for find the greatest element in the array 

#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,min,max;// here we define the needed variable.
    cout<<"enter the size of the array: ";
    cin>>n; //here, we taken the size of  the array.
    cout<<"enter the array element = ";
    for (int i= 0;i<n;i++)
    cin>>arr[i]; // using  for loop taking element from the user.
    max = arr[0]; // initially the initialise the max term by zero.
    for(i=0;i<n;i++)
    {
        if(max<arr[i]) // using if condition check the condition.
        max =arr[i]; // store the maximum value
    }
    min =arr[0]; // initially the initilise the min term by zero.
    for(i=0;i<n;i++)
    {
        if(min>arr[i]) // using if condition cheak contion is true or false.
        min = arr[i]; //storing min term value.
    }
    cout<<"the largest number is = "<<max<<endl;
    cout<<"the smallest element is = "<<min<<endl;
    return 0;
}