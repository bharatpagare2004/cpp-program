// this program for try and catch block
#include<iostream>
#include<cstring>
using namespace std;
int main()
{    // simply declare.
    int age;
    int car;
    int income;
    char city[34];
   // ----->for age purpose
    cout<<"@@@@@@@@@@@@@@@@"<<endl;
    cout<<"enter the age of person:";
    cin>>age;
    try
    { 
        if(age<18||age>55)
        {
          throw age;
        }
        else
        {
            cout<<"age is "<<age<<endl;
        }
    }
    catch(int)

    {
        cout<<" age is not between 18-55"<<endl;

    } 
    //-----> for income purpose
    cout<<"@@@@@@@@@@@@@@@@"<<endl;
    cout<<"enter the income of person: ";
    cin>>income;
    try
    {
        if(income<50000||income>100000)
        {
            throw income;
        }
        else
        {
            cout<<"income is = "<<income<<endl;
        }
    }

        catch(int)
        {
            cout<<" the income is not between 50000 and 100000"<<endl;

        }
        // -----> for city name purpose
        cout<<"@@@@@@@@@@@@@@@@"<<endl;
        cout<<"enter the city name: ";
        cin>>city;
        try
        { // strcmp for comparison purpose.
            if(strcmp(city, "Pune")&& strcmp(city,"Mumbai")&&strcmp(city,"Banglore")&& strcmp(city,"chennai"))
            {
                throw city;
            }
            else{
                 cout<<" the city is :"<<city<<endl;
            }
        }
        catch(char[])
        {
            cout<< "the city is not between above option "<<endl;

        }

        // ----> for vehicle type purpose
        cout<<"@@@@@@@@@@@@@@@@"<<endl;
     cout<<"enter the vehicle type:";
     cin>>car;
     try
     {
        if(car != 2 && car != 4)
        {
            throw car;

        }
        else{
            cout<<"the car is :"<<car<<endl;
        }
     }
     catch(int)
     {
        cout<<"the car is not two wheeler or four wheeler"<<endl;
     }
     return 0;
     

    }
    



