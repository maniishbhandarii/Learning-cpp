#include<iostream>
using namespace std;
 
int main()
{
    int x = 45;
    int* y= &x; //pointer pointing at x
     
    cout<<"the address of x is: "<<&x<<endl;
    cout<<"the address of x is: "<<y<<endl;

    cout<<"the value at x is: "<<x<<endl;
    cout<<"the value at x is: "<<*y<<endl;

    //pointer to pointer
    int** z = &y;

    cout<<"The address of x is: "<<&x<<endl;
    cout<<"The address of x is: "<<y<<endl;
    cout<<"The address of x is: "<<*z<<endl;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of x is: "<<*y<<endl;
    cout<<"The value of x is: "<<**z<<endl;
    
    return 0;
}