// this proram for worker
#include<iostream>
using namespace std;
class worker
{
     private:
     int id;
     char name[29];
    public:
    void set_data();
    void show_data();

};
void worker::set_data()
{
    cout<<"name of worker:   ";
    cin>>name;

    cout<<"worker id:   ";
    cin>>id;

}
void worker ::show_data()
{
    cout<<"name of worker: "<<name<<endl;
    cout<<"id of worker: "<<id<<endl;


}
int main()
{
    worker p;
    p.set_data();
    p.show_data();
    return 0;
}