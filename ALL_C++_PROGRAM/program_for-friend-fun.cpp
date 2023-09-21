// this function for friend function.
#include<iostream>
using namespace std;
class rectangle
{
  private:
  int length, width,area,perimeter;
  public:
  void set(int ,int);
  void cal();
  void show();
  friend rectangle add(rectangle,rectangle);

};
void rectangle::set(int l ,int w)
{
    length = l;
    width =w;

}
void rectangle :: cal()
{
    area = length*width;
    perimeter = 2*(length+width);
}
void rectangle :: show()
{
     cout<<"length = "<<length<<endl;
     cout<<" width  = "<<width<<endl;
     cout<<"area is  = "<<area<<endl;
     cout<<"perimeter is ="<<perimeter<<endl;

}
rectangle add(rectangle  r1,rectangle r2)
{
 rectangle r3;
 r3.length = r1.length+ r2 .length;
 r3 .width = r1 .width+r2.width;
 r3.area= r3.length* r3.width;
 r3.perimeter = 2* (r3.length+r3.width);
 return r3;
}
int main()// this is main function.
{
    rectangle robj1,robj2,robj3;
    robj1.set(12,23);
    robj2.set(5,2);

    robj1.cal();
    robj2.cal();
    robj3 = add(robj1,robj2);
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@>>>>>>>>>";
    cout<<"first rectangle is : "<<endl;
    robj1.show();
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@>>>>>>>>>";
    cout<<"second rectangle is : "<<endl;
    robj2.show();
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@>>>>>>>>>";
    cout<<"third triangle is : "<<endl ;
    robj3.show();
    return 0;

}
