#include <iostream>
using namespace std;
class values;
class Calculator
{
public:
   // class Values obj;
    int sum(int c1, int c2);
};

class Values
{
    int a;
    int b;

public:
    friend class Calculator;
};

    int Calculator::sum(int c1, int c2)
    {
        class Values obj;
        obj.a = c1;
        obj.b = c2;
        return obj.a + obj.b; 
    }

int main()
{
    Calculator obj1;
    cout << "The sum of 34 and 56 is: " << obj1.sum(34,56);
    return 0;
}
