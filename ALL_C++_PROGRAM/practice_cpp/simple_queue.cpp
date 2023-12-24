// this program for queue operation
#include<iostream>
using namespace std;

int queue[5],n = 5,rear =-1,front = -1;

// function for insertion
void insert()
{
    int val;
    if(rear == n - 1) // this condition for full
     cout<<"queue is overflow"<<endl;

    
    else
    {
        if(front == -1)// for empty
        
        front = 0;
        cout<<"enter the job id:";
        cin>>val;

        rear++;
        queue[rear] = val;


        
    
}
}

void delete1()
{
    if(front == -1||front>rear)
    {
        cout<<"queue is underflow";

    }
    else{
        int i;
        cout<<"the delete job id is  :"<<queue[front]<<endl;
        front++;
    }
}

void display()
{
    if(front == -1)
    {
        cout<<"queue is empty";
    }

    else{
        int i;
        for(int i = front ;i<= rear;i++)
        cout<<"the inserted job id :"<<queue[i]<<endl;
        cout<<endl;
        
    }
}
int main()
{
    int ch ;
    cout<<"1. insert the job"<<endl;
    cout<<"2.display the job"<<endl;
    cout<<"3.delete the job"<<endl;
    cout<<"4.exit"<<endl;
    do{
        cout<<"enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
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
    }while(ch !=4);
    exit;
    return 0;
}
