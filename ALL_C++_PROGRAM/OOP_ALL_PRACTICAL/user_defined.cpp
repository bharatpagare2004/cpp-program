/*// this program fro user defined exception
#include<iostream>
#include<exception>
using namespace std;
class myexception : public exception{
   virtual const char* what() const throw()
   {
    return "this is my exception";
   }
};
int main()
{
    myexception e;
    try
    {
        throw e;

    }
    catch(exception& ex) // create object of exception block.
    {
        cout<<ex.what();
    }
}*/
#include<iostream>
using namespace std;
template <class T>
void maxi(T a , T b)
{
    if(a>b)
    {
        cout<<"\na is greater";

    }
    else{
        cout<<" \n b is greater";
    }
}
int main()
{
  cout<<"for integer";
  maxi<int>(34,33);
  cout<<"for float";
  maxi<float>(33.3,33.4);
  return 0;
}
