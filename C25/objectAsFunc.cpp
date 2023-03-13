#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sum(Complex c1, Complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void print()
    {
        cout << "The sum of the two complex numbers is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(2, 5);
    c2.setData(7, 5);
    c3.sum(c1, c2);
    c3.print();

    return 0;
}