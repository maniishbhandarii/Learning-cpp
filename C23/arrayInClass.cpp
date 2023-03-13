#include <iostream>
using namespace std;

class arrayInClass
{
private:
    int itemId[4];
    int itemPrice[4];

public:
    arrayInClass(){

    }
    
    void getitemId()
    {
        for (int i = 0; i < 4; i++)
        {

            cout << "Enter the id of item no. "<<i+1<<" : ";
            cin >>itemId[i];
        }
    }
    void getitemprice()
    {
        for (int i = 0; i < 4; i++)
        {

            cout << "Enter the price of itemid "<<itemId[i]<<" : ";
            cin >>itemPrice[i];
        }
    }
    void display(){
        for (int i = 0; i < 4; i++)
        {
            cout<<"The price of itemId "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
        }
        
    }
};
int main()
{
    arrayInClass obj1;
    obj1.getitemId();
    obj1.getitemprice();
    obj1.display();
    return 0;
}