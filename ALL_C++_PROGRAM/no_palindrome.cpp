// program for cheak number is palindrom or not
#include<iostream>
using namespace std;
int main()
{
    int n , num,digit,rev=0;
    cout<<"enter a positive number:";
    cin>>num;
    n = num;
    // using do while loop.
    do
    {
        digit =num %10; // separete the element and reversed number.
        rev = (rev*10)+digit;
        num = num/10;


    } while(num !=0);
    cout<<"the reverse of string is "<<rev<<endl;
    if(n==rev)
    cout<<"the number is palindrome.";
    else
    cout<<"the number is not palindrom.";
    return 0 ;
        

    
} 