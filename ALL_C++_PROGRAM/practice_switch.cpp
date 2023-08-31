//this program for practice swicth case.
# include <iostream>
using namespace std;
int main ()
{   int element;
    cout<<"Enter a element : ";
    cin>>element;
    
    switch(element)   
    {
        case 34 :cout<<"this element value is 34";
            break;
        case 45 :cout<<"this element value is 45";
            break;
        case 90 :cout<<"this element value is 90";
        break;
        default: cout<<"the element other than 34,45,90";
        break;
        return 0;    
    }
}
