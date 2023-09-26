// this program for nested class 
// class is defined inside the other class.
#include<iostream>
using namespace std;
class a
{
    public:
 class b // this is nested class.
 {
    private:
    int num;
    public:
    void getdata(int n)
    {
      num = n;
    }
    void putdata()
    {
        cout<<"the value of number is :"<<num<<endl;
    }
};
};
int main()
{
    cout<<"nested class in c++"<<endl;
    a::b o;
    o . getdata(890);
    o.putdata();
    return 0;
}  