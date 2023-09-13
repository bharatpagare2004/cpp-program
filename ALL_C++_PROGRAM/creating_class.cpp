// this program for creating class.
#include<iostream>
using namespace std;
   
     class student
        {
        private:int roll_no,m1,m2,m3,m4,m5,total; // this data we cannot acces the outside of the class.
             char name[20]; 
             float percent;
         
        public:
               void getdata();  // this data we can access inside as well as outside the class. 
               void result();
               void showdata();
       
         };  // class end with semicolan.
        void student::getdata()
         {
             cout<<"enter a roll number: ";
             cin>>roll_no;                             // write the functin outside the class.

             cout<<"enter the name : ";
             cin>>name;
             cout<<"enter a marks of mathematis-2: ";
             cin>>m1;
             cout<<"enter a marks of physics: ";
             cin>>m2;
             cout<<"enter a marks of graphics: ";
             cin>>m3;
             cout<<"enter a marks of basic electrical engg: ";
             cin>>m4;
             cout<<"enter a marks of programming and problem solving: ";
             cin>>m5;
         }

         void student::result()
         {
             total = m1+m2+m3+m4+m5;
             percent =total/5.0;
         }
         void student::showdata()
         {
             cout<<"1)ROLL NUMBER :  "<<roll_no<<endl;
             cout<<"2)NAME OF STUDENT :  "<<name<<endl;
             cout<<"3)TOTAL OF MARKS:   "<<total<<endl;
             cout<<"4)PERCENT:   "<<percent<<endl;
             
         }
         int main()  // write this function at the end.
         {     
                student s;  
                s.getdata();   // call the function.
                s.result();
                s.showdata();

               return 0;
        } 




           
         
    

