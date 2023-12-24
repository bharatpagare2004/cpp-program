// this program for selection sort
#include<iostream>
using namespace std;
#define size 10

int n ;
template < class T>
void selection(T a[size])
{
    int i ,j;
    T temp;
    for(i =0 ;i<n-1;i++)
    {
        for(j = i+1;j<n;j++)
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
    cout<<"sorted list is>>>"<<endl;
    for(i = 0;i<n;i++)
    cout<<"\t"<<a[i]<<endl;
}
int main()
{
    int i;
    int a[size];
    float b[size];
    cout<<"integer value";
    cout<<"how many number you want to sort:";
    cin>>n;
    cout<<"enter the number:";
    for(i= 0;i<n;i++)
    cin>>a[i];
    selection(a);

    cout<<"for floating point number"<<endl;
    cout<<"enter the how many number you want to sort";
    cin>>n;
    cout<<"enter the number:";
    for(i = 0;i<n;i++)
    cin>>b[i];
    selection(b);
    return 0;

}