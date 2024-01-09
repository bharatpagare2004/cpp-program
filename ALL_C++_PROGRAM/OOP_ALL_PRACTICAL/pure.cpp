#include<iostream>
using namespace std;
class A
{
public:
virtual void get()
{ }
virtual void show()=0;
};
class B:public A
{
public:
void get()
{
cout<<"SE COMP"<<endl;
}
void show()
{
cout<<"OOP"<<endl;
}
};
int main()
{
A *ptr;
//A obj1; //we can not create object of abstract class
B obj;
obj.get();
obj.show();
ptr=&obj;
ptr->get();
ptr->show();
return 0;
}