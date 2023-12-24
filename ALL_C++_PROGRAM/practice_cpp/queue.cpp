 // this program for c++
 #include<iostream>
 using namespace std;

    int queue[5],n = 5,rear =-1,front = -1;


    // write function for insertion
    void insert()
    {
        int val;
        if(rear == n-1)
        {
            cout<<"queue is overflow."<<endl;

        }
        else
        {
            if(front ==-1)
            
                front =0;
                cout<<"you can insert the element:";
                cin>>val;
                rear++;
                queue[rear] = val;
                

        

        }
    }
//void delete1()
/*
{
    if(front,rear = -1)
    {
        cout<<"queue is empty" ;

    }
    else







}*/
       void display()
       {
        int i;
        if(front == -1)
        
            cout<<"queue is empty "<<endl;
        else{
        for(int i = front;i<=rear;i++)
        cout<<"the inserted element is :"<<queue[i]<<endl;
        cout<<endl;


       
       }
     }
void delete1()
{

    if(front == -1|| front>rear)
    {
    cout<<"queue is underflow";
    return ;}
    else
    {
        cout<<"deleted element is :"<<queue[front]<<endl;
        front++;

    }

}
    int main()
    {

        int ch ;
         cout<<"1.insert the element"<<endl;
        cout<<"2.display the element"<<endl;



        do {
        
          cout<<"enter your choice:";
            cin>>ch; 

        
          switch(ch)
           {
            
             case 1:insert();
              break;

            case 2:display();
            break;

            case 3:
            delete1();
            break;

       
            }

        }while(ch != 4);
        exit;
        return 0;



    }