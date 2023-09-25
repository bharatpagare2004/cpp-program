// this program for hierirchical inheritance
#include<iostream>
using namespace std;
class shape
{
  public :
  int a ;
  int b;
  void get_data(int n, int m)
  {
    a= n;
    b = m;
  }
};
class rectangle: public shape // inherited for base class 
{
  public :
  int rect_area()
  {
    int result =a*b;
    return result;

  }
};
class triangle : public shape // inherited for base class 
{
  public :
     int triangle_area()
     {
        float result = 0.5 *a *b;
        return result;
     }
};
int main()
{
    rectangle r; // create a object of rectangle 
    triangle t; // create a object of rectangle
    int length , breadth, base , height;
    cout<< " enter the length and height of rectangle: ";
    cin >> length >> breadth ;
    r.get_data(length ,breadth); // passing the value of length and breadth 
    int m  = r . rect_area(); // call the function
    cout<< "AREA OF RECTANGLE IS = "<<m<<endl;
    cout<< "enter the base and height of the triangle: ";
    cin>> base>> height;
    t.get_data(base,height);
    int n = t.triangle_area(); //call
    cout<< "AREA OF TRIANGLE = "<<n<< endl;

     return 0 ;




}