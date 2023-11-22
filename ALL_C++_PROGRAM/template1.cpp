// this program for template by using paremeter
#include<iostream>
using namespace std;
template <class T>
void add(T a,T b)
{
    cout<<"addition is : "<<a+b<<endl;

}
int main()

{
    // for integer
    add<int>(45,67);
    // for float
    add<float>(45.4,89.3);
}