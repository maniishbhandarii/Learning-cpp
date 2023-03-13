#include<iostream>
using namespace std;

class Sum{
    int a;
    int b;
    public:
    // void setNumber(int v1, int v2){
    //     a = v1;
    //     b = v2;
    // }
    friend int sum(int c1, int c2);
}; 
int sum(int c1, int c2){
    Sum obj;
    obj.a = c1;
    obj.b = c2;

    return obj.a+obj.b;
}
int main()
{
    Sum obj1;
    cout<<"The sum of 4 and 6 is: "<<sum(4,6);
    return 0;
}