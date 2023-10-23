/*Write a function template selection Sort. Write a program that inputs, sorts and outputs
an integer array and a float array.*/

#include<iostream>
using namespace std;
//#define Size 10

int n;
template <class T>
class sort
{
 int i,j;
 T a[50];
 public:

void insert()
{
	cout<<"\nHow many elements are there?";
	cin>>n;
	cout<<"\nEnter the Numbers"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	selection(a);
}


void selection(T a[])
{
	T temp,exchange=0,cmp=0;
	for(i=0;i<n-1;i++)
	{
		cout<<"\n--------------------After Pass"<<i+1<<"------------------------"<<endl;
		for(j=i+1;j<n;j++)
		{
			cmp++;
			if(a[j]<a[i])
			{
			 exchange++;
			 temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;
			}
			
			for(int k=0;k<n;k++)
			{
				cout<<"\t"<<a[k];
			}	
			cout<<"\n";
			
			//cout<<"\nno of exchanges"<<exchange<<endl;
			//cout<<"\nno of comparision"<<cmp<<endl;
			
		}
	}
	cout<<"\n----------No of Exchange/no of Comparision----------\n Total no of exchanges => "<<exchange<<endl;
	cout<<"\n Total no of comparision => "<<cmp<<endl<<"--------------------Dispaly of sorted list--------------------";
	cout<<endl;
}

void display()
{
	cout<<"\n The sorted List Is...\n";
	for(i=0;i<n;i++)
	cout<<"\t"<<a[i]<<endl;
}
};

int main()
{
	cout<<"Integer value"<<endl;
	sort<int> obj1;
	obj1.insert();
	obj1.display();
	
	cout<<"Float value"<<endl;
	sort<float> obj2;
	obj2.insert();
	obj2.display();
	
	
	return 0;
}
