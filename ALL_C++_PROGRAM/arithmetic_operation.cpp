// arithmetic operation in cpp..
# include <iostream>
using namespace std;
int main()
{
    int a,b;
    int add , sub , mult , mod;
    float div;
    cout<<"enter a first number : "<<endl;
    cin>>a;
    cout<<"enter a second number : "<<endl;
    cin>>b;
    

    add  = a+ b;
    sub = a-b;
    mult = a*b;
    mod = a%b;
    div = (float)a/b;

    // output 
    cout<<"[1]. addition of two number = "<<add<<endl;
    cout<<"[2]. substraction of two number = "<<sub<<endl;
    cout<<"[3]. multiplication of two number = "<<mult<<endl;
    cout<<"[4]. division of two number = "<<mod<<endl;
    cout<<"[5]. division of two number with floating point = "<<div<<endl;
    return 0;

}