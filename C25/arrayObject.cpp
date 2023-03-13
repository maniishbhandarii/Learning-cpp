#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setData(void){
        salary = 31;
        cout<<"Enter the id of a Employee"<<endl;
        cin>>id;
    }
    void getData(void){
        cout<<"The id of employee is: "<<id<<" with salary: "<<salary<<endl;
    }
};

int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setData();
        fb[i].getData();
    }
    
    return 0;
}