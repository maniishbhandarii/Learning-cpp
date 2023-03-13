#include <iostream>
using namespace std;
class Calculator
{
public:
    //Values obj;
    int sum(int c1, int c2);
};

class Values
{
    int a;
    int b;

public:
    friend int Calculator :: sum(int, int);
    // void setData(int v1, int v2){
    //     a = v1;
    //     b = v2;
    // }
};
    int Calculator::sum(int c1, int c2)
    {
        Values obj;
        obj.a = c1;
        obj.b = c2;
        return obj.a+obj.b; 
    }
int main()
{
    Calculator obj1;
    cout<<"The sum of 34 and 56 is: "<<obj1.sum(34,56);
    return 0;
}