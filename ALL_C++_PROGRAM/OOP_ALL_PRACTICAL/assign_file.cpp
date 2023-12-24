
//Write a C++ program that creates an output file, writes information to it,
//closes the file, open it again as an input file and read the information from file.



#include<iostream>
#include<fstream>

using namespace std;
class student
{
  private:
	string name;
	int rollno;
	
  public:
		void add_info()
		{
	                fstream fs;   //creating object of fstream class
			fs.open("sample.txt",ios::app);   //opening file is append
			
			if(!fs)  //checking whether file exist
			cout<<"File Creation failed";
			else
			{
									
			cout<<"enter name of student :";
			cin>>name;
			cout<<"enter roll no.:";
			cin>>rollno;
			
	
			
			fs<<name <<" "; //write name to file
		
			fs<<rollno <<"\n"; // write roll no to file
			fs.close(); //closing file
		}
	}// end of add_info
	void display()
	{
	    fstream fs;  //creating object of fstream class
	    fs.open("sample.txt",ios::in); //opening file in input mode
	    if(!fs) // checking whether file exits
	    cout<<"No Such file";
	    else
	    {
	       while(!fs.eof())  //read till end of the file
	      // while(i1>>rollno>>name>>mark)
	        {
	            fs>>name;  //reading name from file
                    fs>>rollno;  //reading rollno from file
                    if(!fs.eof())  //checking whether reached eof
	          
	            cout<<name<<" ";
	            cout<<rollno<<" ";
	            
	           
	            cout<<"\n"; //message read from file
	        } //end of if
	    }//end of while
           fs.close();//closing file
	
        } 
	};
int main()
{

	student s1;
	int ch;
        fstream fs;  //creating object of fstream class
	do
	{
	    cout<<"\n Student database:";
	    cout<<"\n Menu";
	    cout<<"\n 1. Add student Information";
	    cout<<"\n 2. Display student Information";
	    cout<<"\n 3. Exit";
	    cout<<"\n Enter your choice";
	    cin>>ch;
	    switch(ch)
	    {
	       case 1:
	        s1.add_info(); //add the info
	        break;
	       case 2:
	        s1.display(); // display the info
	        break;
	       case 3:
	        exit(0);// successful exit of programs
	    }
	}while(ch!=3);  //end of while
	
	        
return 0;
}