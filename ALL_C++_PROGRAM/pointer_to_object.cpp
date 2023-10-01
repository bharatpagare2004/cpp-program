// this program for pointer to object
#include<iostream>
using namespace std;
class demo
{
  private:
  int num ;
  char ch ;
  public:
  void set_values(int num,char ch)
  {
    this ->num = num;
    this ->ch = ch;

  }
  void display_values()
  {
    cout<<num<<endl;
    cout<<ch;
  }

};
int main()
{
    demo obj; // object
    obj.set_values(100,'A');// pass the parameter
    obj.display_values();
    return 0;
}