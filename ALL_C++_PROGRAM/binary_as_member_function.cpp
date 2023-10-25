/*// this program for binary as member function.
#include<iostream>
#include<iomanip>

using namespace std;


class point
{
    int x,y,z;
    public:
             void get()
             { 
                cout<<"enter the value:\n";
                cin>>x>>y;


             }
             void display()
             {
                cout<<"the x is :"<<x<<endl;
                cout<<"the y is : "<<y<<endl;

             }
             point operator +(point &p);// this is syntax for binary as member function
  // here return type is class
};
point point :: operator +(point &p)// here defination outside the class in binary as member function take one argument as explicit
{

    point temp;
    temp.x = x+p.x;
    temp.y = y+p.y;
    return temp;
    

}
int main()
{
    point s1,s2,s3;
    s1.get();
    s1.display();
    s2.get();
    s2.display();
    //s3 = s1 + s2;
    s3 =  s1 .operator +(s2);  // this is second syntax for binary as member function
 
     // syntax for binary as member function
      cout<<"after addition is :"<<endl;
    s3.display();
    return 0;

                  
}*/


/*
// binary as member function.
#include<iostream>
#include<iostream>
using namespace std;
class bharat
{
    int x,y,z;
    public:
    void set()
    {
       cout<<"enter the value:";
       cin>>x>>y>>z;

    }
    void get()
    {
        cout<<"the x is = "<<x <<endl;
        cout<<"the y is ="<<y<<endl;
        cout<<"the z is = "<<z<<endl;
    }  
    bharat operator +(bharat &b); // binary as member function


};
bharat bharat:: operator +( bharat &b)
{
   bharat temp;
   temp.x = x +b.x;
   temp.y = y +b.y;
   temp .z = z +b.z;
   return temp;


}
int main()
{
    bharat p1,p2,p3;
   
    p1.set();
    p1.get();
    p2.set();
    p2.get();
    
    cout<<"after addition"<<endl;
    p3 = p1+p2;
     p3.get();
     return 0;

}
*/

#include<iostream>
#include<iomanip>
using namespace std;


class mult
{
    int x,y;
    public:
    void set();
    void display();
    mult operator *(mult &g);// here the declaretion



};
void mult :: set()
{
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y : ";
    cin>>y;

}
void mult :: display()
{
    cout<<"the value of x is="<<x<<endl;
    cout<<"the value of y is ="<<y<<endl;
}

mult mult::operator *(mult &g) // defination outside the binary as member function// class name also required
{
    mult temp;
    temp.x = x*g.x;
    temp.y = y*g.y;
    return temp;
}
int main()
{
    mult k1,k2,k3;
    k1.set();
    k1.display();
    k2.set();
    k2.display();
    
    cout<<"after multiplication"<<endl;
    k3 = k2*k1; // this is syntax for invokes the binary as member function
    k3.display();
    return 0;


}

