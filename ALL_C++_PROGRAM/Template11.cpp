#include<iostream>
using namespace std;
template<class U>
void print1(U a) // it is generic datatype
{
    cout<<" answer is :"<<a<<endl;

}
void print1(int a)
{
    cout<<" result is :"<<a<<endl;
}
int main()
{
    print1(67);
    print1(90.45);
    print1('a');
    print1(45);
    print1("message");
    return 0;


}