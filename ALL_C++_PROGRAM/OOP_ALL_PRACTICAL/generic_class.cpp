// this program for generic class
#include<iostream>
using namespace std;
template <typename T>
class sum
{
    T a,b;
    public:
    sum(T f ,T s)
    {
        a = f;
        b = s;
    }
    T add();
};
template<typename T>
T sum<T>:: add()
{
    T ans;
    ans = a+b;
    return ans;


}
int main()
{
    cout<<"\n for integer value";
    sum<int>obj1(23,44);
    cout<<"\nthe sum is :"<<obj1.add();

    cout<<"\n  for float value ";
    sum<float>obj(33.3,33.3);
    cout<<"\n sum is :"<<obj.add();
}
