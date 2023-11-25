#include<iostream>
using namespace std;
int n; // how many number you want to sort
template <class T>
class sort // creating class

{
    int i ,j;
    T a[89]; //generic is_array
    public:
    void insert()
    {
        cout<<"enter the element:";
        cin>>n;
        cout<<"enter the element:";
        for(int i = 0:i<n;i++)
        
            cin>>a[i]

        
        selection(a);// assign array

    }
    // write the selection sort function.
    void selection(T,a[])
    {
        T temp;
        int min = i;
        for(int i;i<n-1;i++)
        {
            for(int j ;j<n;j++)
            {
               if(a[j]<a[min])
               {
                min = j;
               }
               if(min != i){
                
               }
            }
        }
    }
    void display()
    {
        cout<<"sorted list is :";
        for(int i=0;i<n;i++)
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

