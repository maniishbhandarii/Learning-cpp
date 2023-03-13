#include <iostream>
using namespace std;

class Animal
{
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b2);
    void getdata()
    {
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> e;
    }
};
void Animal ::setdata(int a1, int b2)
{
    a = a1;
    b = b2;
    cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b;
}
int main()
{
    Animal dog;
    dog.d = 43;
    dog.e = 34;
    dog.setdata(3,4);
    dog.getdata();
    return 0;
}