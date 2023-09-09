// new program for goto statement.
#include<iostream>
using namespace std;
int main()
{
    
ineligible:
cout<<"you are not eligible to vote!\n";    
     
cout<<"enter your age:\n";
int age;
cin>>age;
if(age<18)
{
goto ineligible;

}
else
{

cout<<"you are eligible to vote!";

}return 0;
}
    
    
    
    
    
