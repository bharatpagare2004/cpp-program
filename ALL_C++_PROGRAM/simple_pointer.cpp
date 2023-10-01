#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {8,5,3,2,7};
    int *ptr = &arr[0];
    cout<<"the value of second index of array is "<<*ptr;
    return 0;

}