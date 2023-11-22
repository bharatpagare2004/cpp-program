// this program for function template.
/*#include<iostream>
using namespace std;
template <class T>
void max1(T a,T b)
{
    if(a>b)
    cout<<"first number is greater"<<endl;
    else
        cout<<"second number is greater"<<endl;

    
}
int main()
{
    cout<<"integer values"<<endl;
    max1<int>(100,56);
    cout<<"float values"<<endl;
    max1<float>(45.7,675.0);
    return 0;


}*/
#include<iostream>
using namespace std;
template <class T>
T min1(T a,T b)
{
    if(a<b)
    
        return a;

    else
    return b;

    
}
int main()
{
    cout<<"minimum value is "<<min1(4,59)<<endl;
    cout<<"minimum value is "<<min1('p','a')<<endl;
    cout<<"minimum value is "<<min1(78.0,34.6)<<endl;
    return 0;
}
