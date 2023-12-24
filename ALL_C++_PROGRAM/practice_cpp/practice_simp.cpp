// this program for cpp
#include<iostream>
using namespace std;

int queue[5],n = 5,rear =-1,front =-1;
// write function for insert the element to the queue

void insert()
{
    // check queue is full or not
    if(rear == n-1)
    {
        cout<<"the queue is full"<<endl;

    }
    else
    {
        int val;
        if(front == -1)
        cout<<"you can insert the element:";
        cin>>val;
        rear++;
        queue[rear] = val;    
}
}
void delete1()
{
    if(front == -1||front>rear){
    
        cout<<"queue is empty"<<endl;
        
    }
    else{
        cout<<"the delete element is :"<<queue[front];
        front++;


    }
}
// code for display
void display()
{

    if(front == -1)
    {
        cout<<"queue is empty";
    }
    else{
    cout<<" \n the inserted element "<<endl;
    for(int i  = front;i<=rear;i++)
    cout<<"the inserted element is "<<queue[i]<<endl;
    cout<<"\n";
    }
}

int main()
{
    int ch ;
    cout<<"1.insert the element:"<<endl;
    cout<<"2.display the element:"<<endl;
    cout<<"3.delete the element:"<<endl;
    cout<<"4.exit"<<endl;
    do
    {
       cout<<"enter your choice:";
       cin>>ch;
       switch(ch){
       case 1:
       insert();
       break;
       case 2:
       display();
       break;
       case 3:
       delete1();
       break;

    } 
    
}
while (ch !=4);
exit;
return 0;
}