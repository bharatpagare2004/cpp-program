// this program for 2D array
#include<iostream>
using namespace std;
int main()
{    
   int i,j=0;
   int array[4][4] = //syntax of array.

     { {45,89,90,78}, //inner curly braces use (,)commas.
      {67,56,45,23},
      {67,89,90,56},
      {78,67,56,76}};
   

    for(int i =0 ;i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
             cout<<array[i][j]<<" ";
        }
         cout<<"\n";
    }
    return 0;
}