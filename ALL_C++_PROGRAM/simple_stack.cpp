// this program for stack
#include<iostream>
#include<stack>

using namespace std;
int main()
{
     int a,b,i;
    stack<int>s;
    if(s.empty())
    {
        cout<<"stack is empty\n";


    }
    // insert the element to the stack
    s.push(89);
    
    cout<<"addeded element is :"<<s.top()<<endl;
    s.push(36);
    
    cout<<"addeded element is :"<<s.top()<<endl;
    cout<<"size of element:"<<s.size()<<endl;
    if(!s.empty())
    {
        cout<<"stack is not empty"<<endl;

    }
    cout<<"\nPopped element is :"<<s.top();
    s.pop();
    cout<<"\n element after popped:";
    while(!s.empty())
    {
        cout<<s.top()<<"\t";
        s.pop();

    }
    return 0;
}

