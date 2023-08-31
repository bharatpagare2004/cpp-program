// Program for switch statement.
#  include <iostream >
using namespace std;
int main ()
{
    int num;
    cout<<"enter a no.to check a grade: ";
    cin>>num;
     
    switch (num)
     {
     case 10:cout<<"it is 10";
     break;
     case 20:cout<<"it is 20";
     break;
     case 30:cout<<"it is 30";
     break;
     default:cout<<"not 10,20,30";
     break;
     }
     return 0;

}