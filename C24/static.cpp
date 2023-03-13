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
}; 
int Employee :: count;
int main()
{
   Employee manish, gaurav, amit;
   manish.setdata();
   manish.getdata();
   
   gaurav.setdata();
   gaurav.getdata();
   
   amit.setdata();
   amit.getdata();

    return 0;
}