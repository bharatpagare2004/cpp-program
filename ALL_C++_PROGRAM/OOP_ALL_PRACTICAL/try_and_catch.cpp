/*Crete User defined exception to check the following conditions and throw the exception
if the criterion does not meet.
a. User has age between 18 and 55
b. User stays has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune/ Mumbai/ Bangalore / Chennai
d. User has 4-wheeler
Accept age, Income, City, Vehicle from the user and check for the conditions mentioned*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int age;
    int income;
    char city[56];
    int car;

    cout<<"enter the age of person"<<endl;
    cin>> age;
    try
    {
        if (age<18||age>55 )
        {
            throw age;
        }
        else
        {
            cout<<"\nthe age is of person:"<<age<<endl;

        }
        
    }
    catch(int)
    {
        cout<<"\n the age is not between 18 and 55"<<endl;
    }

    cout<<"enter the income of person"<<endl;
    cin>>income;
    try
    {
        if(income<55000||income>100000)
        {
            throw income;
        }
        else
        {
            cout<<"\n the income is "<<income<<endl;

        }


    }
    catch(int)
    {
        cout<<"the income is not between 55000 and 100000"<<endl;
    }
    
    cout<<"\n enter the name of city:"<<endl;
    cin>>city;


    try
    {
       if(strcmp(city ,"Pune") && strcmp(city , "Mumbai") && strcmp(city,"Nagpur") && strcmp(city,"Bangloru"))
        {
            throw city;

        }
        else{
            cout<<"\nthe city name is :"<<city<<endl;
        }


    }
    catch(char [])
    {
        cout<<"the city is not found "<<endl;


    }
 
    cout<<"enter the type of car(two wheeler or 4 wheeler):"<<endl;
    cin>>car;
    try
    {
        if(car != 2 && car != 4)
        {
            throw car;
        }
        else
        {
            cout<<"\nthe car is :"<<car<<endl;

        }
        
    }
    catch(int)
    {
        cout<<"the car is not two wheeler and four wheeler"<<endl;
    }
    
    return 0;
    
}