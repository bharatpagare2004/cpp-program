 // this is virtual class 
 // this class avoid the duplication data.

 #include<iostream>
 using namespace std;
 class a 
 { 
       public:
       void display()
       {
       cout<<" this is cpp class";
       }
 };
 class b :public virtual a
 {

 };
 class c: public virtual a
 {
     
 };
 class d : public b,public c
 {

 };
 int main()
 {
    d s;
    s.display();
     return 0;
 }
