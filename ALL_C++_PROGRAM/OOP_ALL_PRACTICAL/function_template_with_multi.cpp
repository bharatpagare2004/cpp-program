// function template with multiple parameter
#include<iostream>
using namespace std;
template<class T ,class E>
void display(T x ,E y)
{
    cout<<"\n the intity is :"<<x<<y;
}
int main()
{
    display(45,"bharat");
    display(34,4.4);
    return 0;
}