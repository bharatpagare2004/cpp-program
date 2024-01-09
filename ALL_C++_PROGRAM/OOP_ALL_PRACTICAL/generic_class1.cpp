// this program for generic class
#include<iostream>
using namespace std;
template <typename T>
class sum
{
    T a,b;
    public:
    sum(T f, T l)
    {
        a = f;
        b = l ;
    }
    T add();
};
template<typename T>
T sum<T>::add()
{
    T ans;
    ans = a+b;
    return ans;

}
int main()
{
    cout<<"\n for integer";
    sum<int>obj(7777,33);
    cout<<"the addition is:"<<obj.add();

    cout<<"\n  for float ";
    sum<float>obj1(34.3,33.3);
    cout<<"the float si :"<<obj1.add();


}