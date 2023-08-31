//this program for if else ladder.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter a your age = "<<endl;
    cin>>age;
    if(age>150||age<1)
    {
        cout<<"invalide age.";
    }
    else if (age>=18) //you can use mutiple time this condition...
    {
      cout<<"you can vote.";
    }
    else
    {
        cout<<"you can not vote.";
    }
    return 0;
}    