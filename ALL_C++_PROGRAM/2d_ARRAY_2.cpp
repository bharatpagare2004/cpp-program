// this program for 2d array.
//taking value from user .
#include <iostream>
using namespace std;
int main()
{
    int bharat[3][3],i,j;
    cout<<"enter a value from user : ";
    for( i = 0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            cin>>bharat[i][j];
        }
    }          
        cout<<"displaying array element:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<bharat[i][j]<<" ";

            }
            cout<<"\n";
        }     


    return 0;
}