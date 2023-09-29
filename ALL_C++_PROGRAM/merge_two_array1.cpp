// this program for merge two array
#include<bits/stdc++.h> // this header file include all the needed library.
#define N 100 // difining the array 
using namespace std;
class merge_array // creating merge_array class 
{
   public:
   void merge(int a1[N],int a2[N],int a3[N],int n1,int n2)// decleare the variable.
   {
      int i = 0,j=0,k=0; // initialize
    
      while(i<n1&&i<n2)
      { 
          if(a1[i]<a2[j])
          {
            a3[k++] =a1[i++]; // store the small value in array 3 of array1
          }
         else
         { 
            a3[k++] = a2[j++]; // store the small vaue of array 3 of array 2
         }
      }
      while(i<n1)
      {
        a3[k++] = a1[i++]; // remaining the value of array 1
      }
      while(j<n2)
      {
        a3[k++] = a2[j++]; // remaining the value of array 2
      }


    }


};
int main()
{
    merge_array ma; // creating array of the class 
    int n1,n2,n3;

    int i;

    int a[N],b[N],c[N];

    cout<<"enter the array size of the first array: ";
    cin>>n1;

    cout<<"\nenter the array element of first array: ";
    for(i = 0;i<n1; i++)
    cin>>a[i];// accept the values of array elment 1.

    cout<<"\nenter the size of the second array";
    cin>>n2;
    
    cout<<"\nenter the element of second array";
    for(i = 0;i<n2;i++)
    cin>>b[i]; // accept the values of array elment 

    sort(a,a+n1); // sort array 1
    sort(b ,b+n2); // sort array 2


    cout<<"\nthis is first sorted element array\n";
    for(i= 0;i<n1;i++)
    
    cout<<a[i]<<" "; // output of array element ---->>> sorted form

    

    cout<<"\nthis is second sorted element array\n";
    for(i=0;i<n2;i++){

    cout<<b[i]<<" "; // output of array element ------>>> sorted form
    }
    ma.merge(a,b,c,n1,n2);

    
    cout<<"\nthis is final sorted array list:\n ";
        
    for(i =0;i<(n1+n2);i++){
        cout<<c[i]<<" "; // out of merge array with sorted form.


    }
    return 0;

 }
