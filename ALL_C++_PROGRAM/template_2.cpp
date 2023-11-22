#include<iostream>
using namespace std;
template <class T>
void comparison(T a,T b)
{
    if(a>b)
    {
        cout<<"a is greater :"<<a<<endl;

    }
    else
     {
        cout<<"b is greater:"<<b<<endl;
     }
    
}
int main()
{
    cout<<"for integer"<<endl;
      comparison<int>(678.9,90);
   cout<<"for float"<<endl;
comparison<float>(90.9,100.4);
return 0;

}