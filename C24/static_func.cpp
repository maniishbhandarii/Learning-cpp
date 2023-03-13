#include<iostream>
using namespace std;
 
class Employee{
    int id;
    static int count;
    public:
    void setdata(){
        cout<<"Enter the value of id: ";
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"The id of "<<count<<" employee is: "<<id<<endl;
    }
    static void getCount(){
        //cin>>id;          Throws an error because we can't access normal variable in static function
        cout<<"The value of count is: "<<count<<endl;
    }
}; 
int Employee :: count;
int main()
{
   Employee manish, gaurav, amit;
   manish.setdata();
   manish.getdata();
   Employee::getCount();
   
   gaurav.setdata();
   gaurav.getdata();
   Employee::getCount();
   
   amit.setdata();
   amit.getdata();
   Employee::getCount();

    return 0;
}