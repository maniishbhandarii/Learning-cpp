#include<iostream>
using namespace std;
 
int main()
{
    int arr[]={23,4455,6,5,4};
    int* p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<"The value at "<< i <<"index is: "<<*p<<endl;
        *p++;
    }
    
    return 0;
}