// this program for selection sort
// concept is template class
#include<iostream>
using namespace std;
#define size 10

int n;
template <class T>
void selection(T  a[size])
{
    int i,j;
    T temp;
    // selection sort code.
    for(i =0;i<n-1;i++)
    {
        for(j= i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<endl;
    cout<<"the sorted array is >>>>>>"<<endl;
    for(i = 0;i<n;i++)
    cout<<"\t"<<a[i]<<endl;
}
int main()
{
    int i;
    int a[size];
    float b[size];
    cout<<"for integer value"<<endl;
    cout<<"enter the how many number you want to sort:";
    cin>>n;
    cout<<"enter the integer number:";
    for(i = 0;i<n;i++)
    cin>>a[i];
    selection(a);

    cout<<"for float value"<<endl;
    cout<<"enter the how number you want to sort:";
    cin>>n;
    cout<<"enter the float number:";
    for(int i =0;i<n;i++)
    cin>>b[i];
    selection(b);

}