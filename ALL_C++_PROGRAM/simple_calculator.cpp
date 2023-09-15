// simple calculator by using switch case.
#include <iostream>
using namespace std;
int main()
{
    char op; // taking character.
    float num1,num2;

    cout<<"enter your opration:  +  ,  -  ,  *  , /  = ";
    cin>>op;
    cout<<"enter num1 and num2 values : "<<endl;
    cin>>num1>>num2;



// using of switch case 
   switch(op) //taking cases ....
   {
       case '+': cout<<num1<<"+"<<num2<<"="<<num1+num2; // case 1
            break;
       case '-': cout<<num1<<"-"<<num2<<"="<<num1-num2; //case 2
            break;
       case '*': cout<<num1<<"*"<<num2<<"="<<num1*num2; //case 3
            break;
       case '/': cout<<num1<<"/"<<num2<<"="<<num1/num2; // case 4
            break;
       default: // it is default case.
     
           cout<<"error ! opration is not correct.";
    }                 
}       
       
            
            





            
   
