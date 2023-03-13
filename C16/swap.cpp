#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 90;
    int y = 48;
    swap(x, y); //call by reference
    cout<<"X: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    return 0;
}