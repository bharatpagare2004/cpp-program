// this program for multiparameter
#include<iostream>
using namespace std;
template<class T1, class T2 >
void display(T1 a, T2 b)
{
    cout<<"\n a is ="<<a;
    cout<<"\n b is = "<<b;
}
int main()
{
    display(23,"met");
    display(33.3,333);
    return 0;
}