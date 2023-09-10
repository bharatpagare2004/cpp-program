// this is for 2D array.
#include <iostream>
using namespace std;
int main()
{
    int ch[3][3],i,j;
    cout<<"enter a array element:  ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>ch[i][j];
        }
        
    }
    cout<<"dispalying array element:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<ch[i][j]<<" ";
        }
        cout<<"\n";  //this is for new line row.
    }
    return 0;
}