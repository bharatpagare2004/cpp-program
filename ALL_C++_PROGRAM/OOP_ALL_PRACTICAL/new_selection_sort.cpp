/* write a function template selection sort. write a program that inputs  and outputs 
an integer array and a float array.*/
#include<iostream>
using namespace std;
int n ;
template <class y>
class sort // creating class for sorting purpose
{ 
    int i,j;
    y a[58];
    public:
    void insert()
    {
        cout<<"\n enter the how many element you want to insert: ";
        cin>>n;
        cout<<"\nenter the number:";
        for(i = 0;i<n;i++)
        
        cin>>a[i];
        selection(a);
    }
    // this is for selection sort purpose.
    void selection(y a[])
    {
       y temp,exchange = 0, cmp = 0;
       for(i=0;i<n-1;i++)
       {

        cout<<"\n@@@@@@@@@@@ After Pass"<<i+1<<"@@@@@@@@@@@@@@@@@"<<endl;
        for(j=i+1;j<n;j++)
        {
            cmp++;
            if(a[j]<a[i])
            {
                exchange++;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
            for(int k = 0;k<n;k++)
            {
                cout<<"\t"<<a[k];

            }
            cout<<" \n";// for new line. 
        }
        
       }
    }
    void display()
    {
        cout<<"\n the sorted list is \n";
        for(i = 0;i<n;i++)
        cout<<"\t"<<a[i]<<endl;

    }
     
};
int main()
{
    cout<<"integer value "<<endl;
    sort<int> o1;
    o1.insert();
    o1.display();
    // this for float value
    cout<<"float value";
    sort<float> o2;
    o2.insert();
    o2.display();
    

    return 0 ;

}
