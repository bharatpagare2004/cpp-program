// this program for find the area of circle and perimeter by using class.
#include <iostream>
using namespace std;
 
 class circle
 {
    private:
    int      area,r ,p1; 
    char name[20];
    public:
          void getdata();
          void area_of_circle();
          void perimeter();
          void showdata();
 };
 void circle::getdata()

 {
    cout<<"radius of circle = ";
    cin>>r;

 }
 void circle::area_of_circle()
 {
    area = 3.14*r*r;

 }
 void circle::perimeter()
 {
    p1 =2*3.14*r; 
 }
 void circle::showdata()
 {
    cout<<"@@@@@@@@THIS PROGRAM FOR AREA OF CIRCLE AND PERIMETER@@@@@@@@@@"<<endl;
    cout<<"area of circle is = "<<area<<endl;
    cout<<"perimeter of circle is = "<<p1<<endl;
    
 }
 int main()
 {
    circle s,s2;
    s.getdata();
    s.showdata();
    
    s2.getdata();
    s2.showdata();

    return 0 ;

 }  

