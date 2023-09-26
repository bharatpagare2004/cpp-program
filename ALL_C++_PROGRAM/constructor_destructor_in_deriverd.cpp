// constructor and destructor in derived class.
# include<iostream>
using namespace std;
class parent
{
    public:
    parent()// this is constuctor (default)
    {
        cout<<"parent constructor"<<endl;
    }
    ~parent()
    {
        cout<<"parent destructor"<<endl;
    }

};
class child:public parent
{
  public:
  child()
  {
    cout<<"child constructor"<<endl;

  }
  ~child()
  {
    cout<<"child destructor"<<endl;
  }

};
int main()
{
    child k; // only create a object automatically call the constructor
    return 0;
}
