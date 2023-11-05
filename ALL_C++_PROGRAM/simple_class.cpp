// this is simple program for class
#include<iostream>
using namespace std;
// creating class 
class calculation // creating class
{ 
    public:
       int length;
      int breadth;
     float height;

     
     // declaration of function inside the public  access specifier
     void calculation_area() // write the function inside the class 
     {
        cout<<"enter the value of length,and breadth:";
        cin>> length>>breadth;
        cout<<"the result is :" <<length*breadth;

     }
     void calculation_volume()// write the function inside the class 
      {      cout<<"\n enter three parameter value:";
              cin>>length>>breadth>>height;

               cout<<" the result is of "<< length*breadth*height;
     }

 
};
int main()
{
    calculation p;
    p.calculation_area();
   p.calculation_volume();
    return 0;
}
