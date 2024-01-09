#include<iostream>

using namespace std;
class sample
{
public: virtual void getdata()
{ }
virtual void display()=0;
};
class derived: public sample
{
public: void getdata()
{
cout<<"\nMET";
}
void display()
{
cout<<"\nBKC";
}
};
int  main()
{

sample *ptr;
derived B;
B.getdata();
B.display();
ptr=&B;
cout<<"\nNASIK";
ptr->getdata();
ptr->display();


}