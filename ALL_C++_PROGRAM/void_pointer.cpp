//  it holds the address of any data type but it is associated with any data type
#include<iostream>
using namespace std;
int main()
{
    void *ptr; // this is void pointer  
     float f = 8.9;
     ptr = &f;
     cout<<&f<<endl;// address of f 
     cout<<ptr<<endl;// address of f is assign to the ptr // that means the &f and ptr sama address value
     cout<<*(float*)ptr; // the value of float, the value of float is 8.9
     return 0;



}
