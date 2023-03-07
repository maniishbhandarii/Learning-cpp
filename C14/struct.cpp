#include<iostream>
using namespace std;
 
struct employee{
    int eId;
    char favChar;
    float salary;
};

//shortcut by typedef
typedef struct car
{
    int number;
    char color;
    int no_of_wheels;
    float price;
}ca;

int main()
{
    struct employee manish;
    manish.eId = 34534;
    manish.favChar = 'f';
    manish.salary = 123209;
    cout<<manish.eId<<endl;
    cout<<manish.favChar<<endl;
    cout<<manish.salary<<endl;

    //shortcut for struct
    ca tesla;
    tesla.number = 334334;
    tesla.color = 'G';
    tesla.no_of_wheels = 4;
    tesla.price = 34.34;
    return 0;
}